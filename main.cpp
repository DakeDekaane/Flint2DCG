//Semestre 2018 - 1
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************	 - Sánchez Neri David Yaxkin			******//
//*************											******//
//************************************************************//
#include "Main.h"

float azul_claro[] = { 0.341,0.623,0.823 };
float azul_oscuro[] = { 0.101,0.419,0.615 };
float verde_claro[] = { 0.69, 1.0, 0.549, 0.0 };
float negro[] = { 0.0,0.0,0.0 };


void InitGL ( void )     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limpiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClearColor(0.341, 0.623, 0.823, 1.0);		//Color de fondo
	glColor3fv(negro);					//Color de línea
	
	//Cabeza 
	glLineWidth(2.5);
	
	glBegin(GL_LINE_STRIP);
	glVertex3f(235, -308, -1.0);
	glVertex3f(225, -313, -1.0);
	glVertex3f(216, -319, -1.0);
	glVertex3f(210, -326, -1.0);
	glVertex3f(204, -335, -1.0);
	glVertex3f(201, -343, -1.0);
	glVertex3f(200, -350, -1.0);
	glVertex3f(199, -361, -1.0);
	glVertex3f(201, -368, -1.0);
	glVertex3f(206, -380, -1.0);
	glVertex3f(215, -396, -1.0);
	glVertex3f(226, -408, -1.0);
	glVertex3f(245, -423, -1.0);
	glVertex3f(249, -431, -1.0);
	glVertex3f(256, -439, -1.0);
	glVertex3f(266, -445, -1.0);
	glVertex3f(277, -449, -1.0);
	glVertex3f(287, -451, -1.0);
	glVertex3f(295, -454, -1.0);
	glVertex3f(342, -454, -1.0);
	glVertex3f(351, -453, -1.0);
	glVertex3f(361, -451, -1.0);
	glVertex3f(373, -450, -1.0);
	glVertex3f(385, -447, -1.0);
	glVertex3f(394, -444, -1.0);
	glVertex3f(404, -441, -1.0);
	glVertex3f(414, -437, -1.0);
	glVertex3f(422, -432, -1.0);
	glVertex3f(431, -427, -1.0);
	glVertex3f(438, -419, -1.0);
	glVertex3f(444, -411, -1.0);
	glVertex3f(448, -402, -1.0);
	glVertex3f(450, -390, -1.0);
	glVertex3f(450, -376, -1.0);
	glVertex3f(448, -366, -1.0);
	glVertex3f(442, -355, -1.0);
	glVertex3f(436, -345, -1.0);
	glVertex3f(434, -342, -1.0);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(436, -345, -1);
	glVertex3f(437, -338, -1);
	glVertex3f(437, -314, -1);
	glVertex3f(434, -305, -1);
	glVertex3f(432, -294, -1);
	glVertex3f(428, -287, -1);
	glVertex3f(423, -278, -1);
	glVertex3f(417, -271, -1);
	glVertex3f(407, -265, -1);
	glVertex3f(399, -261, -1);
	glVertex3f(390, -258, -1);
	glVertex3f(372, -258, -1);
	glVertex3f(367, -259, -1);
	glVertex3f(356, -262, -1);
	glVertex3f(348, -264, -1);
	glVertex3f(342, -267, -1);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
	glVertex3f(348, -264, -1);
	glVertex3f(344, -263, -1);
	glVertex3f(340, -262, -1);
	glVertex3f(336, -263, -1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(339, -262, -1);
	glVertex3f(333, -255, -1);
	glVertex3f(325, -249, -1);
	glVertex3f(313, -242, -1);
	glVertex3f(298, -241, -1);
	glVertex3f(291, -243, -1);
	glVertex3f(284, -249, -1);
	glVertex3f(281, -251, -1);
	glEnd();

	//Nariz y boca
	glBegin(GL_LINE_STRIP);
	glVertex3f(322, -267, -1);
	glVertex3f(319, -269, -1);
	glVertex3f(311, -277, -1);
	glVertex3f(302, -285, -1);
	glVertex3f(291, -294, -1);
	glVertex3f(283, -299, -1);
	glVertex3f(277, -302, -1);
	glVertex3f(269, -305, -1);
	glVertex3f(262, -308, -1);
	glVertex3f(255, -312, -1);
	glVertex3f(248, -316, -1);
	glVertex3f(240, -320, -1);
	glVertex3f(231, -329, -1);
	glVertex3f(226, -337, -1);
	glVertex3f(220, -346, -1);
	glVertex3f(219, -352, -1);
	glVertex3f(219, -364, -1);
	glVertex3f(222, -374, -1);
	glVertex3f(226, -380, -1);
	glVertex3f(233, -389, -1);
	glVertex3f(242, -396, -1);
	glVertex3f(251, -399, -1);
	glVertex3f(259, -403, -1);
	glVertex3f(268, -404, -1);
	glVertex3f(281, -407, -1);
	glVertex3f(302, -407, -1);
	glVertex3f(311, -406, -1);
	glVertex3f(321, -404, -1);
	glVertex3f(331, -402, -1);
	glVertex3f(336, -398, -1);
	glEnd();

	//Dientes
	glBegin(GL_LINE_STRIP);
	glVertex3f(242, -396, -1);
	glVertex3f(243, -402, -1);
	glVertex3f(247, -406, -1);
	glVertex3f(254, -412, -1);
	glVertex3f(262, -415, -1);
	glVertex3f(272, -417, -1);
	glVertex3f(306, -417, -1);
	glVertex3f(312, -416, -1);
	glVertex3f(321, -414, -1);
	glEnd();
	
	/*Aquí va relleno dientes*/

	glBegin(GL_LINE_STRIP);
	glVertex3f(247, -406, -1);
	glVertex3f(250, -413, -1);
	glVertex3f(254, -420, -1);
	glVertex3f(259, -428, -1);
	glVertex3f(265, -432, -1);
	glVertex3f(270, -434, -1);
	glVertex3f(280, -435, -1);
	glVertex3f(288, -434, -1);
	glVertex3f(296, -432, -1);
	glVertex3f(305, -427, -1);
	glVertex3f(312, -423, -1);
	glVertex3f(321, -415, -1);
	glVertex3f(329, -408, -1);
	glVertex3f(336, -398, -1);
	glEnd();

	//Lengua
	glBegin(GL_LINE_STRIP);
	glVertex3f(270, -434, -1);
	glVertex3f(272, -429, -1);
	glVertex3f(276, -424, -1);
	glVertex3f(281, -421, -1);
	glVertex3f(287, -417, -1);
	glEnd();

	/*Aqui va relleno lengua*/

	glBegin(GL_LINE_STRIP);
	glVertex3f(325, -395, -1);
	glVertex3f(331, -396, -1);
	glVertex3f(336, -398, -1);
	glVertex3f(341, -400, -1);
	glVertex3f(346, -404, -1);
	glEnd();

	//Ojo derecho
	glBegin(GL_LINE_STRIP);
	glVertex3f(240, -321, -1);
	glVertex3f(237, -315, -1);
	glVertex3f(235, -308, -1);
	glVertex3f(235, -299, -1);
	glVertex3f(236, -289, -1);
	glVertex3f(239, -280, -1);
	glVertex3f(242, -274, -1);
	glVertex3f(246, -269, -1);
	glVertex3f(249, -265, -1);
	glVertex3f(253, -262, -1);
	glVertex3f(258, -257, -1);
	glVertex3f(265, -253, -1);
	glVertex3f(273, -251, -1);
	glVertex3f(281, -251, -1);
	glVertex3f(289, -250, -1);
	glVertex3f(294, -251, -1);
	glVertex3f(301, -253, -1);
	glVertex3f(307, -256, -1);
	glVertex3f(313, -262, -1);
	glVertex3f(319, -269, -1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(281, -250, -1);
	glVertex3f(288, -253, -1);
	glVertex3f(294, -256, -1);
	glVertex3f(299, -260, -1);
	glVertex3f(304, -265, -1);
	glVertex3f(308, -272, -1);
	glVertex3f(311, -277, -1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(255, -312, -1);
	glVertex3f(253, -307, -1);
	glVertex3f(253, -297, -1);
	glVertex3f(256, -291, -1);
	glVertex3f(261, -287, -1);
	glVertex3f(269, -283, -1);
	glVertex3f(278, -283, -1);
	glVertex3f(284, -284, -1);
	glVertex3f(288, -288, -1);
	glVertex3f(291, -294, -1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(262, -308, -1);
	glVertex3f(260, -304, -1);
	glVertex3f(260, -299, -1);
	glVertex3f(262, -295, -1);
	glVertex3f(266, -290, -1);
	glVertex3f(270, -288, -1);
	glVertex3f(276, -289, -1);
	glVertex3f(281, -291, -1);
	glVertex3f(283, -294, -1);
	glVertex3f(283, -298, -1);
	glEnd();

	//Ojo izquierdo
	glBegin(GL_LINE_STRIP);
	glVertex3f(334, -365, -1);
	glVertex3f(328, -362, -1);
	glVertex3f(323, -360, -1);
	glVertex3f(318, -355, -1);
	glVertex3f(315, -350, -1);
	glVertex3f(312, -343, -1);
	glVertex3f(310, -337, -1);
	glVertex3f(310, -328, -1);
	glVertex3f(311, -321, -1);
	glVertex3f(313, -314, -1);
	glVertex3f(316, -306, -1);
	glVertex3f(320, -300, -1);
	glVertex3f(325, -293, -1);
	glVertex3f(330, -288, -1);
	glVertex3f(337, -284, -1);
	glVertex3f(343, -281, -1);
	glVertex3f(348, -278, -1);
	glVertex3f(356, -276, -1);
	glVertex3f(362, -275, -1);
	glVertex3f(375, -274, -1);
	glVertex3f(383, -275, -1);
	glVertex3f(389, -277, -1);
	glVertex3f(396, -281, -1);
	glVertex3f(402, -285, -1);
	glVertex3f(407, -290, -1);
	glVertex3f(411, -295, -1);
	glVertex3f(414, -300, -1);
	glVertex3f(417, -306, -1);
	glVertex3f(419, -313, -1);
	glVertex3f(420, -320, -1);
	glVertex3f(420, -331, -1);
	glVertex3f(418, -341, -1);
	glVertex3f(412, -349, -1);
	glVertex3f(407, -355, -1);
	glVertex3f(400, -360, -1);
	glVertex3f(392, -364, -1);
	glVertex3f(384, -367, -1);
	glVertex3f(374, -370, -1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(348, -278, -1);
	glVertex3f(358, -278, -1);
	glVertex3f(365, -280, -1);
	glVertex3f(372, -282, -1);
	glVertex3f(378, -283, -1);
	glVertex3f(383, -286, -1);
	glVertex3f(389, -291, -1);
	glVertex3f(394, -294, -1);
	glVertex3f(400, -300, -1);
	glVertex3f(404, -307, -1);
	glVertex3f(407, -313, -1);
	glVertex3f(410, -319, -1);
	glVertex3f(411, -328, -1);
	glVertex3f(412, -345, -1);
	glVertex3f(412, -349, -1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(329, -365, -1);
	glVertex3f(348, -365, -1);
	glVertex3f(358, -366, -1);
	glVertex3f(366, -368, -1);
	glVertex3f(374, -370, -1);
	glVertex3f(384, -373, -1);
	glVertex3f(392, -377, -1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(368, -321, -1);
	glVertex3f(375, -324, -1);
	glVertex3f(380, -329, -1);
	glVertex3f(383, -335, -1);
	glVertex3f(384, -340, -1);
	glVertex3f(384, -349, -1);
	glVertex3f(380, -357, -1);
	glVertex3f(373, -362, -1);
	glVertex3f(365, -363, -1);
	glVertex3f(356, -362, -1);
	glVertex3f(350, -360, -1);
	glVertex3f(346, -355, -1);
	glVertex3f(343, -348, -1);
	glVertex3f(343, -340, -1);
	glVertex3f(344, -334, -1);
	glVertex3f(349, -327, -1);
	glVertex3f(353, -323, -1);
	glVertex3f(360, -321, -1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(361, -328, -1);
	glVertex3f(370, -330, -1);
	glVertex3f(375, -333, -1);
	glVertex3f(377, -337, -1);
	glVertex3f(377, -343, -1);
	glVertex3f(375, -350, -1);
	glVertex3f(369, -354, -1);
	glVertex3f(360, -355, -1);
	glVertex3f(355, -354, -1);
	glVertex3f(351, -349, -1);
	glVertex3f(350, -341, -1);
	glVertex3f(352, -335, -1);
	glVertex3f(355, -330, -1);
	glEnd();

	//Antena derecha
	glBegin(GL_LINE_STRIP);
	glVertex3f(348, -264, -1);
	glVertex3f(347, -254, -1);
	glVertex3f(340, -250, -1);
	glVertex3f(333, -254, -1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(345, -253, -1);
	glVertex3f(352, -246, -1);
	glVertex3f(357, -235, -1);
	glVertex3f(361, -228, -1);
	glVertex3f(364, -219, -1);
	glVertex3f(368, -210, -1);
	glVertex3f(371, -202, -1);
	glVertex3f(374, -192, -1);
	glVertex3f(376, -184, -1);
	glVertex3f(379, -174, -1);
	glVertex3f(382, -161, -1);
	glVertex3f(383, -149, -1);
	glVertex3f(384, -126, -1);
	glVertex3f(383, -117, -1);
	glVertex3f(380, -111, -1);
	glVertex3f(376, -108, -1);
	glVertex3f(372, -109, -1);
	glVertex3f(368, -112, -1);
	glVertex3f(366, -117, -1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(340, -250, -1);
	glVertex3f(343, -244, -1);
	glVertex3f(346, -236, -1);
	glVertex3f(350, -226, -1);
	glVertex3f(352, -217, -1);
	glVertex3f(355, -208, -1);
	glVertex3f(357, -200, -1);
	glVertex3f(358, -190, -1);
	glVertex3f(360, -160, -1);
	glVertex3f(359, -131, -1);
	glVertex3f(361, -126, -1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(367, -137, -1);
	glVertex3f(371, -131, -1);
	glVertex3f(373, -127, -1);
	glVertex3f(373, -120, -1);
	glVertex3f(362, -116, -1);
	glVertex3f(345, -112, -1);
	glVertex3f(323, -111, -1);
	glVertex3f(303, -113, -1);
	glVertex3f(281, -116, -1);
	glVertex3f(257, -117, -1);
	glVertex3f(228, -116, -1);
	glVertex3f(203, -112, -1);
	glVertex3f(183, -102, -1);
	glVertex3f(178, -100, -1);
	glVertex3f(173, -101, -1);
	glVertex3f(171, -105, -1);
	glVertex3f(172, -112, -1);
	glVertex3f(175, -118, -1);
	glVertex3f(182, -127, -1);
	glVertex3f(193, -134, -1);
	glVertex3f(223, -143, -1);
	glVertex3f(257, -138, -1);
	glVertex3f(283, -132, -1);
	glVertex3f(304, -127, -1);
	glVertex3f(325, -124, -1);
	glVertex3f(343, -123, -1);
	glVertex3f(358, -126, -1);
	glVertex3f(371, -131, -1);
	glEnd();

	//Antena izquierda
	glBegin(GL_LINE_STRIP);
	glVertex3f(428, -288, -1);
	glVertex3f(435, -280, -1);
	glVertex3f(441, -273, -1);
	glVertex3f(449, -264, -1);
	glVertex3f(456, -255, -1);
	glVertex3f(463, -245, -1);
	glVertex3f(469, -236, -1);
	glVertex3f(475, -227, -1);
	glVertex3f(480, -216, -1);
	glVertex3f(485, -205, -1);
	glVertex3f(489, -193, -1);
	glVertex3f(492, -183, -1);
	glVertex3f(495, -171, -1);
	glVertex3f(498, -158, -1);
	glVertex3f(499, -132, -1);
	glVertex3f(496, -126, -1);
	glVertex3f(492, -125, -1);
	glVertex3f(487, -129, -1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(423, -279, -1);
	glVertex3f(430, -271, -1);
	glVertex3f(436, -263, -1);
	glVertex3f(442, -255, -1);
	glVertex3f(447, -247, -1);
	glVertex3f(451, -240, -1);
	glVertex3f(455, -231, -1);
	glVertex3f(460, -218, -1);
	glVertex3f(464, -206, -1);
	glVertex3f(466, -196, -1);
	glVertex3f(468, -185, -1);
	glVertex3f(470, -173, -1);
	glVertex3f(472, -161, -1);
	glVertex3f(474, -150, -1);
	glVertex3f(480, -140, -1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(483, -151, -1);
	glVertex3f(486, -148, -1);
	glVertex3f(490, -144, -1);
	glVertex3f(491, -137, -1);
	glVertex3f(487, -129, -1);
	glVertex3f(484, -126, -1);
	glVertex3f(471, -110, -1);
	glVertex3f(455, -98, -1);
	glVertex3f(438, -87, -1);
	glVertex3f(410, -76, -1);
	glVertex3f(386, -66, -1);
	glVertex3f(364, -54, -1);
	glVertex3f(344, -38, -1);
	glVertex3f(327, -20, -1);
	glVertex3f(321, -17, -1);
	glVertex3f(316, -18, -1);
	glVertex3f(314, -23, -1);
	glVertex3f(314, -32, -1);
	glVertex3f(316, -39, -1);
	glVertex3f(326, -56, -1);
	glVertex3f(348, -75, -1);
	glVertex3f(378, -87, -1);
	glVertex3f(408, -96, -1);
	glVertex3f(432, -101, -1);
	glVertex3f(450, -110, -1);
	glVertex3f(465, -122, -1);
	glVertex3f(478, -135, -1);
	glVertex3f(480, -139, -1);
	glVertex3f(486, -148, -1);
	glEnd();

	//Cuello
	glBegin(GL_LINE_STRIP);
	glVertex3f(332, -454, -1);
	glVertex3f(331, -464, -1);
	glVertex3f(321, -478, -1);
	glVertex3f(325, -484, -1);
	glVertex3f(331, -487, -1);
	glVertex3f(342, -484, -1);
	glVertex3f(351, -480, -1);
	glVertex3f(358, -479, -1);
	glVertex3f(363, -478, -1);
	glVertex3f(360, -472, -1);
	glVertex3f(359, -466, -1);
	glVertex3f(361, -451, -1);
	glEnd();
	
	//Brazo izquierdo
	glBegin(GL_LINE_STRIP);
	glVertex3f(363, -478, -1);
	glVertex3f(376, -490, -1);
	glVertex3f(386, -496, -1);
	glVertex3f(393, -500, -1);
	glVertex3f(399, -508, -1);
	glVertex3f(403, -516, -1);
	glVertex3f(408, -537, -1);
	glVertex3f(413, -551, -1);
	glVertex3f(417, -559, -1);
	glVertex3f(423, -574, -1);
	glVertex3f(430, -585, -1);
	glVertex3f(436, -593, -1);
	glVertex3f(446, -609, -1);
	glVertex3f(455, -624, -1);
	glVertex3f(462, -639, -1);
	glVertex3f(467, -655, -1);
	glVertex3f(470, -671, -1);
	glVertex3f(470, -689, -1);
	glVertex3f(467, -697, -1);
	glVertex3f(458, -697, -1);
	glVertex3f(450, -695, -1);
	glVertex3f(444, -692, -1);
	glVertex3f(439, -686, -1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex3f(374, -557, -1);
	glVertex3f(379, -561, -1);
	glVertex3f(387, -566, -1);
	glVertex3f(393, -574, -1);
	glVertex3f(401, -583, -1);
	glVertex3f(407, -593, -1);
	glVertex3f(413, -604, -1);
	glVertex3f(418, -616, -1);
	glVertex3f(422, -630, -1);
	glVertex3f(425, -644, -1);
	glVertex3f(427, -656, -1);
	glVertex3f(428, -666, -1);
	glVertex3f(412, -666, -1);
	glVertex3f(400, -665, -1);
	glVertex3f(366, -664, -1);
	glVertex3f(275, -658, -1);
	glVertex3f(269, -662, -1);
	glVertex3f(269, -666, -1);	//init left hand
	glVertex3f(271, -666, -1);
	glVertex3f(273, -665, -1);
	glVertex3f(277, -667, -1);
	glVertex3f(280, -670, -1);
	glVertex3f(286, -677, -1);
	glVertex3f(288, -685, -1);
	glVertex3f(285, -683, -1);
	glVertex3f(276, -683, -1);
	glVertex3f(280, -689, -1);
	glVertex3f(289, -694, -1);
	glVertex3f(294, -698, -1);
	glVertex3f(303, -700, -1);
	glVertex3f(312, -701, -1);
	glVertex3f(312, -701, -1);
	glVertex3f(330, -700, -1);
	glVertex3f(372, -697, -1);
	glVertex3f(385, -695, -1);
	glVertex3f(398, -693, -1);
	glVertex3f(409, -691, -1);
	glVertex3f(423, -690, -1);
	glVertex3f(430, -689, -1);
	glVertex3f(439, -686, -1);
	glVertex3f(447, -683, -1);
	glVertex3f(456, -680, -1);
	glVertex3f(460, -683, -1);
	glVertex3f(456, -677, -1);
	glVertex3f(451, -672, -1);
	glVertex3f(443, -668, -1);
	glVertex3f(428, -665, -1);
	glEnd();


	//Left hand
	glBegin(GL_LINE_STRIP);
	glVertex3f(269, -666, -1);
	glVertex3f(259, -667, -1);	
	glVertex3f(250, -662, -1);
	glVertex3f(243, -658, -1);
	glVertex3f(228, -653, -1);
	glVertex3f(206, -652, -1);	//detail one
	glVertex3f(182, -650, -1);	//detail two
	glVertex3f(156, -647, -1);  //detail tree
	glVertex3f(139, -653, -1);	//detail four
	glVertex3f(129, -657, -1);	//detail five
	glVertex3f(110, -668, -1);
	glVertex3f(112, -673, -1);
	glVertex3f(130, -664, -1);
	glVertex3f(129, -657, -1);
	glVertex3f(130, -664, -1);
	glVertex3f(141, -660, -1);
	glVertex3f(139, -653, -1);
	glVertex3f(141, -660, -1);
	glVertex3f(152, -656, -1);
	glVertex3f(156, -647, -1);
	glVertex3f(152, -656, -1);
	glVertex3f(178, -658, -1);
	glVertex3f(182, -650, -1);
	glVertex3f(178, -658, -1);
	glVertex3f(172, -669, -1);
	glVertex3f(146, -670, -1);
	glVertex3f(146, -664, -1);
	glVertex3f(148, -658, -1);
	glVertex3f(146, -664, -1);
	glVertex3f(146, -670, -1);
	glVertex3f(134, -675, -1);
	glVertex3f(124, -681, -1);
	glVertex3f(122, -675, -1);
	glVertex3f(121, -669, -1);
	glVertex3f(122, -675, -1);
	glVertex3f(124, -681, -1);
	glVertex3f(110, -688, -1);
	glVertex3f(104, -684, -1);
	glVertex3f(105, -677, -1);
	glVertex3f(112, -673, -1);
	glVertex3f(105, -677, -1);
	glVertex3f(104, -684, -1);
	glVertex3f(110, -688, -1);
	glVertex3f(111, -697, -1);
	glVertex3f(120, -701, -1);
	glVertex3f(131, -698, -1);
	glVertex3f(126, -691, -1);
	glVertex3f(124, -681, -1);
	glVertex3f(126, -691, -1);
	glVertex3f(131, -698, -1);
	glVertex3f(143, -697, -1);
	glVertex3f(153, -693, -1);
	glVertex3f(148, -682, -1);
	glVertex3f(149, -672, -1);
	glVertex3f(148, -682, -1);
	glVertex3f(153, -693, -1);
	glVertex3f(166, -695, -1);
	glVertex3f(177, -692, -1);
	glVertex3f(173, -681, -1);
	glVertex3f(172, -669, -1);
	glVertex3f(173, -681, -1);
	glVertex3f(177, -692, -1);
	glVertex3f(187, -692, -1);
	glVertex3f(200, -697, -1);
	glVertex3f(199, -682, -1);
	glVertex3f(200, -669, -1);
	glVertex3f(203, -658, -1);
	glVertex3f(206, -652, -1);
	glVertex3f(203, -658, -1);
	glVertex3f(200, -669, -1);
	glVertex3f(199, -682, -1);
	glVertex3f(200, -697, -1);
	glVertex3f(210, -701, -1);
	glVertex3f(227, -702, -1);
	glVertex3f(242, -700, -1);
	glVertex3f(254, -691, -1);
	glVertex3f(260, -685, -1);
	glVertex3f(260, -676, -1);
	glVertex3f(258, -667, -1);
	glVertex3f(260, -676, -1);
	glVertex3f(260, -685, -1);
	glVertex3f(270, -681, -1);
	glVertex3f(284, -683, -1);





































































	

































	glEnd();

  glutSwapBuffers ( );
  // Swap The Buffers
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
  if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);	

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	glOrtho (-20.0, 535.0, -740.0, 20.0, -1.0, 1.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {

	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;
	default:        // Cualquier otra
		break;
	}
	glutPostRedisplay();
}

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )

  glutInitWindowSize  (555, 760);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Flint"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}



