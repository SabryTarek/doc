new Vue({
    el: '#app',
    data: {
        currencies
    },
      mounted() {
        getCurrencies()
    },
    methods: {
        
    function getCurrencies() {
        axios.get("https://free.currencyconverterapi.com/api/v6/currencies")
         .then(res => console.log(res.data.results))
      }
    }
  })
  