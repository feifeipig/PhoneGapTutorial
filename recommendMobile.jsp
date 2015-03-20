<% String title = "Today's Picks"; %>


<%@ include file="WEB-INF/jsp/top.inc" %>
                    <ul>
                        <li><div class="prod_pic"><img src="data:image/jpeg;base64,{{ photo }}" alt="{{ prod_name }}" /></div></li>
                        <li><div class="recommend" id="recommend-item">
                            <ul>
                                <li>Recommend Score:&#160;&#160;&#160;&#160;&#160; {{ str_score }}</li>
                                <li>Recommend Confidence: {{ str_prob }}</li>
                                <li class="prodStats">
                                    <div class="statsLike"><h5>Who like it most?</h5>
                                                       Age:&#160;{{ like_age }}<br>
                                                       Skin Type:&#160;{{ like_skintype }}<br>
                                                       Hair Type:&#160;{{ like_hairtype }}<br>
                                    </div>
                                    <div class="statsDislike"><h5>Who like it least?</h5>
                                                          Age:&#160;{{ dislike_age }}<br>
                                                          Skin Type:&#160;{{ dislike_skintype }}<br>
                                                          Hair Type:&#160;{{ dislike_hairtype }}<br>
                                    </div>
                                </li>
                                <li class="feedback"><ul>
                                    <li><div class="wishlist">I haven't tried it yet: <a id="wishlist" href="#">{{ status }}</a></div></li>
                                    <li><div class="rate">I have tried it. Rate it:
          	                        <span class="inline-rating"><ul class="star-rating small-star">
          		                        <li class="current-rating" style="width:0;"></li>
           		                        <li><a id="1star" href="#" title="Will never use it again" class="one-star">1</a></li>
           		                        <li><a id="2star" href="#" title="Almost forgot about it" class="two-stars">2</a></li>
           		                        <li><a id="3star" href="#" title="Use it sometimes" class="three-stars">3</a></li>
           		                        <li><a id="4star" href="#" title="Use it often" class="four-stars">4</a></li>
           		                        <li><a id="5star" href="#" title="Always use it" class="five-stars">5</a></li>
           	                        </ul></span></li>
                                </ul></li>
                            </ul>
                        </div></li>
                    </ul>
                    <br><br>
                </div><!-- /container -->
                
                <%@ include file="WEB-INF/jsp/footer.inc" %>
         </script>
        	             
    <script src="js/lib/json2.js"></script>
    <script src="js/lib/underscore-min.js"></script>
    <script src="js/lib/backbone-min.js"></script>
    <script src="js/lib/infiniScroll.js"></script>
    <script src="js/lib/bootstrap.min.js"></script>
       
    <script>var user_id = <%= user_id %>;</script>
    <script>mobile = 1;</script>
        
    <script src="js/recommendMobile.js"></script>
    <script src="js/filter.js"></script>
	
    <!-- Bootstrap core JavaScript
    ================================================== -->
    <!-- Placed at the end of the document so the pages load faster -->
  </body>
</html>

