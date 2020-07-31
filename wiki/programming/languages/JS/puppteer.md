Pupeteer
========

- using chromium headless browser
- great utility for:
  - PDF generation
  - screenshots
  - web scraping



to start puppeteer we need:
- browser object  =>    const browser = await puppeteer.launch({headless: true})
- page object     =>    const page = await browser.newPage()

page.setUserAgent('')
user
agent because we are web scraping and we
really want to act like a normal browser
and I'm pretty sure the user agent that
puppeteer will give you by default is
sort of detectable as a robot so we want
to change
just something that's not just in case I
don't even know if Shopify is doing a
detection on this it's just something
like to do where'd I get this I just
want to Google on said what's my user
agent string and I got it from there so
-----------------------------------------------------------------------------------------------------------------------------------
const puppeteer = require('puppeteer');
const URL = 'https://coding.napolux.com';

puppeteer.launch({ headless: true, args: ['--no-sandbox', '--disable-setuid-sandbox'] }).then(async browser => {
    const page = await browser.newPage();
    await page.setViewport({width: 320, height: 600})
    await page.setUserAgent('Mozilla/5.0 (iPhone; CPU iPhone OS 9_0_1 like Mac OS X) AppleWebKit/601.1.46 (KHTML, like Gecko) Version/9.0 Mobile/13A404 Safari/601.1')

    await page.goto(URL, {waitUntil: 'networkidle0'});
    await page.waitForSelector('body.blog');
    await page.addScriptTag({url: 'https://code.jquery.com/jquery-3.2.1.min.js'})

    const result = await page.evaluate(() => {
        try {
            var data = [];
            $('h3.loop__post-title').each(function() {
                const url = $(this).find('a').attr('href');
                const title = $(this).find('a').attr('title')
                data.push({
                    'title' : title,
                    'url'   : url
                });
            });
            return data; // Return our data array
        } catch(err) {
            reject(err.toString());
        }
    });

    // let's close the browser
    await browser.close();

    // ok, let's log blog titles...
    for(var i = 0; i < result.length; i++) {
        console.log('Post: ' + result[i].title + ' URL: ' + result[i].url);
    }
    process.exit();
}).catch(function(error) {
    console.error('No way Paco!');
    process.exit();
});
-----------------------------------------------------------------------------------------------------------------------------------
const puppeteer = require('puppeteer');

(async () => {
  const browser = await puppeteer.launch()
  const page = await browser.newPage()
  await page.goto('https://example.com')
  await page.screenshot({path: 'example.png'})
  await page.pdf({path: 'hn.pdf', format: 'A4'})

  await browser.close();
})();

-----------------------------------------------------------------------------------------------------------------------------------
- npm i puppeteer
- npm i puppeteer-core //version of Puppeteer that doesn't download Chromium by default.
- npm i --save puppeteer@next // try/test a prerelease version


-----------------------------------------------------------------------------------------------------------------------------------
page
.goto(URL)
.setViewport({width: 320, height: 600})
.setUserAgent('Mozilla/5.0 (iPhone; CPU iPhone OS 9_0_1 like Mac OS X) AppleWebKit/601.1.46 (KHTML, like Gecko) Version/9.0 Mobile/13A404 Safari/601.1')
.waitForNavigation() // till the network is finished its activity for documents I don't like to use that as much because it's a bit
ambiguous 
.waitForSelector('')
.pdf({path: 'hn.pdf',format: 'letter'})   // page.pdf() is currently supported only in headless mode.

.screenshot()
.content()

$ === document.querySelector
$$ === document.querySelectorAll
-----------------------------------------------------------------------------------------------------------------------------------
browser
.newPage()
.close()


