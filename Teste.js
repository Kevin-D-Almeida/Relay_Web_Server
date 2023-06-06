        // Import the functions you need from the SDKs you need
        import { initializeApp } from "https://www.gstatic.com/firebasejs/9.22.0/firebase-app.js";
        import { getAnalytics } from "https://www.gstatic.com/firebasejs/9.22.0/firebase-analytics.js";
        
        // TODO: Add SDKs for Firebase products that you want to use
        // https://firebase.google.com/docs/web/setup#available-libraries
      
        // Your web app's Firebase configuration
        // For Firebase JS SDK v7.20.0 and later, measurementId is optional
        const firebaseConfig = {
          apiKey: "AIzaSyCqMb4laAgyBu1EYr4R9rtzoODVN0y7a8E",
          authDomain: "webserver-e057f.firebaseapp.com",
          databaseURL: "https://webserver-e057f-default-rtdb.firebaseio.com",
          projectId: "webserver-e057f",
          storageBucket: "webserver-e057f.appspot.com",
          messagingSenderId: "606538081183",
          appId: "1:606538081183:web:ccfe5522f4eec09ba953aa",
          measurementId: "G-Z8G55LJMMH"
        };
      
        // Initialize Firebase
        const app = initializeApp(firebaseConfig);
        const analytics = getAnalytics(app);