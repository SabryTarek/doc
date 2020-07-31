Testing
========

automated testing "write a code which test your code" | "computer which try test cases not  humans":
- unit test -> do tests on a block of code do one process
- integration test -> do tests on blocks of code connecting with eachather
- End-to-End test (E2E) (user interface (UI) test) -> trace a function in backend and frontend 


automated testing styles:
- TDD -> test driven development -> write testing case before the code "test first" | "fill first" 
- BDD -> Behavior Driven development -> write test anyone can read it not programmers only
    - Jasmine


test styles:
- test last
- test first
- test driven


- unit test & integration test Requirements:
    - test runner: Excute your tests and Summarize Result EX: Mocha
    - Assertion library: Define testing logic and condition EX: Chai
    - Jest = test runner + Assertion library
- E2E Requirements:
    - Headless Browser: cli Web-Brower(Browser API) without UI EX: Puppeteer

unit testing
============

- mocks
- subs
- fake
- spies
- dummy
- test double


-test doubles:
- spies:
can record information about function calls like the number of times it is called what arguments they took the return values what's this value is or if there were any exceptions from so I found there's two types of spies there's anonymous functions and spies the rap methods in our code
- stubs
- mocks
simple service that pretends that provides dummy data to mock or simulate external dependencies


- test case
- test suite -> colelction of tests run into same module
- test fixture -> constractor(setUp) and destractor(tearDown) after each test method,
 for all test cases in the same class(for test suite) if setUp faild tearDown doesn't invoked





>>> you cannot test all the code paths because there's so many options





code coverage


Smoke test

هو نوع من System test يستخدم بالاخير تست سريع تشيك ع الفنكشنز الاساسيه مثل فتح تحميل تسجيل دخول

Regression Test

بعد تعديل الديفكت ترجع تسوي تست ع الاجزاء الي حول الديفتكت لانها يمكن تتاثر






false positive double check opposite





- conventions: app.js -> app.test.js | app.spec.js

-----------------------------------------------------------------------------------------------------------------------
Jest
====
test driven development
painless javascript testing platform
zero configration
__tests__

run test in parallel to minmize runtime
jest
--watch
--coverage

selenuim phantom selinium web deriver protactor 
configration in packages.json
"jest": {
    "coverageReports":
    "text", "html"
}

open coverage/index.html

test("write your description here", () => {
    expect(add(2, 6)).toBe(8)
}, max time for test by ms = timeout)

test("add 2 + 6 equal 8", () => {
    expect(add(2, 6)).toBe(8)
}, 1000)


test("add 2 + 6 equal 9", () => {
    expect(add(2, 6)).not.toBe(9)
}, 1000)


matchers = assertions
test suite a file wich contain test for spacific module



- .not()
- .toBe() # for primitve data types {number, string} only because it compare by value not by referance
- .toEqual() # for complex data types {array, objec} only because it compare by referance (compare addresses in memory)


- .toBeNull()
- .toBeUndefind()
- .toBeDefined()
- .toBeFalsy() # {0, null, undefined}
- .toBeTruthy()


- .toBeLessThan()
- .toBeLessThanOrEqual()
- .toBeGreaterThan()
- .toBeGreaterThanOrEqual()

- .toMach # for a REGEX


Array:
- .toContain()


axios.get() # reutn promise


- beforeEach()
- afterEach()
- beforeAll()
- afterAll()

The function exist check using toBeDefined() isn't working. If you forget module.exports = function, the test won't fail because the require will still return an object. Instead, you could use
expect(typeof chunkArray).toStrictEqual('function');

- anagram
- array chunks
WebdriverIO -> for UI test


-----------------------------------------------------------------------------------------------------------------------

















