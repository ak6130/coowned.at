<div id="carouselExampleFade" class="carousel slide carousel-fade" data-ride="carousel">
  <div class="carousel-inner">

    <?php 
    $first = $page->Images_Carousel->first()->id;
    foreach ($page->Images_Carousel as $slider):
    ?>
        <div class="carousel-item <?php if($page->Images_Carousel->first()){echo " active";}; ?>">
          <img src="<?php echo $slider->url; ?>" class="d-block w-100" alt="Foto">
        </div>

    <?php 
    endforeach;
    ?>
  </div>
    <a class="carousel-control-prev" href="#carouselExampleFade" role="button" data-slide="prev">
      <span class="carousel-control-prev-icon" aria-hidden="true"></span>
      <span class="sr-only">Previous</span>
    </a>
    <a class="carousel-control-next" href="#carouselExampleFade" role="button" data-slide="next">
      <span class="carousel-control-next-icon" aria-hidden="true"></span>
      <span class="sr-only">Next</span>
    </a>
</div>

<h1> Die ID ist <?php echo $first;?> </h1>