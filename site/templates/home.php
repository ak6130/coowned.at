<?php

include("./inc/header.inc"); 
include ("./inc/navbar.inc");?>

	<body>
		<h1><?php echo $page->title; ?></h1>
		<?php if($page->editable()) echo "<p><a href='$page->editURL'>Edit</a></p>"; ?>
	
<?php

include("./inc/footer.inc"); ?>
