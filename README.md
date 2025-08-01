# Silent Hill Decompilation Project

An in-progress decompilation of the 1.1 US release of *Silent Hill* on the Playstation 1.

## Progress
Due to the limited memory on the PlayStation 1, games often distribute their logic and functionality across different binary overlays. *Silent Hill* follows this approach by separating core engine code, screen-related code, and map stage event code into many distinct binaries. The main executable (`SLUS_007.07` on the 1.1 NTSC release) serves primarily as a memory handler.

Progress bars powered by [decomp.dev](https://decomp.dev)

<table align=center>
    <tbody>
        <tr>
            <th colspan=3>Total Progress</th>
        </tr>
        <tr>
            <td colspan=3 align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=code&category=all"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&category=all&label=Silent+Hill+(Fuzzy+Match)"/></a></td>
        </tr>
        <tr>
            <th colspan=3>⚙ SLUS-00707 ⚙</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td colspan=2>Purpose</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?category=main"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&category=main"/></a></td>
            <td colspan=2>Main executable.</td>
        </tr>
        <tr>
            <th colspan=3>🧟‍♂️⚔⚙🎮 BODYPROG.BIN 🎮⚙⚔🧟‍♂️</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td colspan=2>Purpose</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?category=engine"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&category=engine"/></a></td>
            <td colspan=2>Main game logic.</td>
        </tr>
        <tr>
            <th colspan=3>🎮 Game System Overlays 🎮</th>
        </tr>
        <tr>
            <td colspan=3 align=center>
<details>
<summary>Click here to expand</summary>
<!-- Github incorrectly parses it if it's indented... -->
<table>
    <tbody>
        <tr>
          <th colspan=3>👨‍💼 B_KONAMI.BIN 👨‍💼</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td>Purpose</td>
            <td>Note</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=screens/b_konami/b_konami"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=screens/b_konami/b_konami&color=rgb(255,215,0)"/></a></td>
            <td>Boot screen logic.</td>
            <td><a href="https://github.com/Vatuu/silent-hill-decomp/commit/349b284d61a6901df3b96b99a612a66653d97238">First fully decompiled and matching overlay!</a></td>
        </tr>
        <tr>
          <th colspan=3>🎞 STREAM.BIN 🎞</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td>Purpose</td>
            <td>Note</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=screens/stream/stream"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=screens/stream/stream&color=rgb(255,215,0)"/></a></td>
            <td>Full motion videos stream logic.</td>
            <td><a href="https://github.com/Vatuu/silent-hill-decomp/commit/d2541f2c10667860048a6bd17bc39bbd87280d47">Third fully decompiled and matching overlay!</a></td>
        </tr>
        <tr>
          <th colspan=3>💾 SAVELOAD.BIN 💾</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td>Purpose</td>
            <td>Note</td>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=screens/saveload/saveload"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=screens/saveload/saveload&color=rgb(255,215,0)"/></a></td>
            <td>Save and load screen logic.</td>
            <td><a href="https://github.com/Vatuu/silent-hill-decomp/commit/f72646453302f8c84933decf1326c9b9ebd3d622">Fourth fully decompiled and matching overlay!</a></td>
        </tr>
        <tr>
          <th colspan=3>📜 STF_ROLL.BIN 📜</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td>Purpose</td>
            <td>Note</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=screens/credits/credits"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=screens/credits/credits&color=rgb(255,215,0)"/></a></td>
            <td>Credits roll logic.</td>
            <td><a href="https://github.com/Vatuu/silent-hill-decomp/commit/701c1223daa79fa6317ee4d09d54ff3d99112abc">Second fully decompiled and matching overlay!</a></td>
        </tr>
        <tr>
          <th colspan=3>🛠 OPTION.BIN 🛠</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td>Purpose</td>
            <td>Note</td>
        </tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=screens/options/options"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=screens/options/options&color=rgb(255,215,0)"/></a></td>
            <td>Options screen logic.</td>
            <td><a href="https://github.com/Vatuu/silent-hill-decomp/commit/a7ab294077dab8104a18ddacb8e567c23eaf0efe">Fifth fully decompiled and matching overlay!</a></td>
        </tr>
      </tbody>
    </table>
</details>
</td>
          <tr>
            <th colspan=3>🗺 Game Map Overlays 🗺</th>
          </tr>
          <tr>
            <td colspan=3 align=center>
<details>
<summary>Click here to expand</summary>
<!-- Github incorrectly parses it if it's indented... -->
<table>
    <tbody>
        <tr>
          <th colspan=3>🏙 MAP0 🏙</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td colspan=2>Location</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map0_s00/map0_s00"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map0_s00/map0_s00"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map0_s00/map0_s00_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map0_s00/map0_s00_2"/></a></td>
            <td colspan=2>Nightmare intro sequence in Old Silent Hill.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map0_s01/map0_s01"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map0_s01/map0_s01"/></a></td>
            <td colspan=2>Cafe in Old Silent Hill.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map0_s02/map0_s02"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map0_s02/map0_s02"/></a></td>
            <td colspan=2>Bonus unlockable areas in Old Silent Hill.</td>
        </tr>
        <tr>
          <th colspan=3>🏫 MAP1 🏫</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td colspan=2>Location</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map1_s00/map1_s00"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map1_s00/map1_s00"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map1_s00/map1_s00_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map1_s00/map1_s00_2"/></a></td>
            <td colspan=2>School first floor, courtyard, and basement.</td>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map1_s01/map1_s01"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map1_s01/map1_s01"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map1_s01/map1_s01_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map1_s01/map1_s01_2"/></a></td>
            <td colspan=2>School second floor.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map1_s02/map1_s02"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map1_s02/map1_s02"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map1_s02/map1_s02_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map1_s02/map1_s02_2"/></a></td>
            <td colspan=2>School first floor and courtyard in Otherworld.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map1_s03/map1_s03"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map1_s03/map1_s03"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map1_s03/map1_s03_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map1_s03/map1_s03_2"/></a></td>
            <td colspan=2>School second floor and school roof in Otherworld.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map1_s04/map1_s04"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map1_s04/map1_s04"/></a></td>
            <td>Unknown</td>
            <td>School location, likely in Otherworld. Possibly unused.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map1_s05/map1_s05"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map1_s05/map1_s05"/></a></td>
            <td colspan=2>School boss fight</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map1_s06/map1_s06"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map1_s06/map1_s06"/></a></td>
            <td colspan=2>School first floor and basement after the boss fight.</td>
        </tr>
        <tr>
          <th colspan=3>🏙 MAP2 🏙</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td colspan=2>Location</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map2_s00/map2_s00"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map2_s00/map2_s00"/></a></td>
            <td colspan=2>Old Silent Hill after finishing the school.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map2_s01/map2_s01"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map2_s01/map2_s01"/></a></td>
            <td colspan=2>Church</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map2_s02/map2_s02"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map2_s02/map2_s02"/></a></td>
            <td colspan=2>Central Silent Hill</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map2_s03/map2_s03"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map2_s03/map2_s03"/></a></td>
            <td>Unknown</td>
            <td>Location related to Central Silent Hill. Possibly unused.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map2_s04/map2_s04"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map2_s04/map2_s04"/></a></td>
            <td colspan=2>Police station in Central Silent Hill.</td>
        </tr>
        <tr>
          <th colspan=3>🏥 MAP3 🏥</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td colspan=2>Location</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map3_s00/map3_s00"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map3_s00/map3_s00"/></a></td>
            <td colspan=2>Hospital beginning. Ends after meeting with Kaufmann.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map3_s01/map3_s01"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map3_s01/map3_s01"/></a></td>
            <td colspan=2>Hospital 1st and basement floors after meeting with Kaufmann.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map3_s02/map3_s02"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map3_s02/map3_s02"/></a></td>
            <td colspan=2>Green Lion Antique Shop cutscene in the Hospital.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map3_s03/map3_s03"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map3_s03/map3_s03"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map3_s03/map3_s03_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map3_s03/map3_s03_2"/></a></td>
            <td colspan=2>Hospital third and second floor in Otherworld.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map3_s04/map3_s04"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map3_s04/map3_s04"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map3_s04/map3_s04_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map3_s04/map3_s04_2"/></a></td>
            <td colspan=2>Hospital first floor in Otherworld.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map3_s05/map3_s05"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map3_s05/map3_s05"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map3_s05/map3_s05_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map3_s05/map3_s05_2"/></a></td>
            <td colspan=2>Hospital basement in Otherworld.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map3_s06/map3_s06"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map3_s06/map3_s06"/></a></td>
            <td colspan=2>Hospital first floor after the Otherworld section.</td>
        </tr>
        <tr>
          <th colspan=3>🏙 MAP4 🏙</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td colspan=2>Location</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map4_s00/map4_s00"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map4_s00/map4_s00"/></a></td>
            <td>Unknown</td>
            <td>Possibly unused</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map4_s01/map4_s01"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map4_s01/map4_s01"/></a></td>
            <td colspan=2>Green Lion Antique Shop in Central Silent Hill and Otherworld.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map4_s02/map4_s02"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map4_s02/map4_s02"/></a></td>
            <td colspan=2>Central Silent Hill in Otherworld.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map4_s03/map4_s03"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map4_s03/map4_s03"/></a></td>
            <td colspan=2>Mall and boss fight.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map4_s04/map4_s04"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map4_s04/map4_s04"/></a></td>
            <td>Hospital First Floor</td>
            <td>Cutscene with Lisa after finding the<br/>altar in the Green Lion Antique Shop and<br/>meeting Lisa again after the mall boss fight.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map4_s05/map4_s05"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map4_s05/map4_s05"/></a></td>
            <td colspan=2>Central Silent Hill Floatstinger boss fight in Otherworld.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map4_s06/map4_s06"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map4_s06/map4_s06"/></a></td>
            <td>Unknown</td>
            <td>Possibly unused</td>
        </tr>
        <tr>
          <th colspan=3>🏙🍹 MAP5 🍹🏙</th>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map5_s00/map5_s00"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map5_s00/map5_s00"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map5_s00/map5_s00_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map5_s00/map5_s00_2"/></a></td>
            <td colspan=2>Sewers lower and upper levels.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map5_s01/map5_s01"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map5_s01/map5_s01"/></a></td>
            <td colspan=2>Silent Hill Resort Area.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map5_s02/map5_s02"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map5_s02/map5_s02"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map5_s02/map5_s02_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map5_s02/map5_s02_2"/></a></td>
            <td colspan=2>Annie's Bar and Indian Runner in Resort Area.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map5_s03/map5_s03"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map5_s03/map5_s03"/></a></td>
            <td colspan=2>Norman's Motel in Resort Area.</td>
        </tr>
        <tr>
          <th colspan=3>🏙🍹🔥 MAP6 🔥🍹🏙</th>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map6_s00/map6_s00"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map6_s00/map6_s00"/></a></td>
            <td colspan=2>Silent Hill Resort Area in Otherworld.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map6_s01/map6_s01"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map6_s01/map6_s01"/></a></td>
            <td colspan=2>Boat at Lakeside Pier.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map6_s02/map6_s02"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map6_s02/map6_s02"/></a></td>
            <td colspan=2>Lakeside Pier and Lighthouse.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map6_s03/map6_s03"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map6_s03/map6_s03"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map6_s03/map6_s03_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map6_s03/map6_s03_2"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map6_s03/map6_s03_3"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map6_s03/map6_s03_3"/></a></td>
            <td colspan=2>Sewer connecting to Lakeside Amusement Park.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map6_s04/map6_s04"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map6_s04/map6_s04"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map6_s04/map6_s04_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map6_s04/map6_s04_2"/></a></td>
            <td colspan=2>Cybil boss fight and cutscene of Dahlia kidnapping Alessa.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map6_s05/map6_s05"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&color=%23003cc7&measure=fuzzy_match&unit=maps/map6_s05/map6_s05"/></a></td>
            <td>Unknown</td>
            <td>Possibly unused</td>
        </tr>
        <tr>
          <th colspan=3>❔🏥 MAP7 🏥❔</th>
        </tr>
        <tr>
            <td>Progress</td>
            <td colspan=2>Location</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map7_s00/map7_s00"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map7_s00/map7_s00"/></a></td>
            <td colspan=2>Hospital first floor in Nowhere and Lisa cutscene.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map7_s01/map7_s01"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map7_s01/map7_s01"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map7_s01/map7_s01_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map7_s01/map7_s01_2"/></a></td>
            <td>Unknown</td>
            <td>Nowever related.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map7_s02/map7_s02"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map7_s02/map7_s02"/></a><br/><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map7_s02/map7_s02_2"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map7_s02/map7_s02_2"/></a></td>
            <td>Unknown</td>
            <td>Unknown parts of Nowhere and parts of the<br/>cutscene when Alessa struggles against<br/>Dahlia.</td>
        </tr>
        <tr>
            <td align=center><a href="https://decomp.dev/Vatuu/silent-hill-decomp?unit=maps/map7_s03/map7_s03"><img src="https://decomp.dev/Vatuu/silent-hill-decomp.svg?mode=shield&measure=fuzzy_match&unit=maps/map7_s03/map7_s03"/></a></td>
            <td colspan=2>Final boss fight.</td>
        </tr>
      </tbody>
    </table>
</details>
</td>
    </tbody>
</table>

## Building (Linux/Windows)

### Install build dependencies
The build process has the following package requirements:
- git
- build-essential
- binutils-mips-linux-gnu
- cpp-mips-linux-gnu
- python3
- python3-venv
- bchunk
- 7z

Under a Debian-based distribution (or Windows with a Debian-based WSL2 setup), you can install these with the following commands:
```
sudo apt update
sudo apt install git build-essential binutils-mips-linux-gnu cpp-mips-linux-gnu python3 python3-venv bchunk p7zip-full
```

### Clone the repository
Clone `https://github.com/Vatuu/silent-hill-decomp` to your desired directory. Make sure to clone recursively!
```
git clone --recursive https://github.com/Vatuu/silent-hill-decomp.git && cd silent-hill-decomp
```

### Place the ROM
You will need to provide your own ROM dump of the NTSC-U 1.1 version of the game. If dumped correctly, you will have a `.BIN` file with the SHA1 hash `34278D31D9B9B12B3B5DB5E45BCBE548991ECBC7` (616,494,480 Bytes / 587 MiB).

After dumping, the `.BIN` file must be placed as `rom/image/SLUS-00707.bin` in the repo.

### Setup Python virtual environment and requirements
Modern Linux distros require a virtual environment to be set up before installing requirements with pip.

You can set up an environment in the repo folder with the following:
```bash
python3 -m venv .venv                      # Creates a `.venv` folder with the environment.
source .venv/bin/activate                  # Activates the environment (needs to be run in every new terminal session).
python3 -m pip install -r requirements.txt # Installs the project requirements from `requirements.txt`.
```

### Build the code
Run `make setup` to extract needed assets and code from the binary.
If the setup was successful, run `make` to build.
Once the build has finished, a folder named `build` will be produced. The output will be inside this.

Additional Make commands:
* `build`: Builds the executable and overlays.
* `check`: Builds the executable and overlays. After compilation, it compares checksums with the original files.
* `clean-build`: Clears the project configuration without deleting files.
* `clean-check`: Clears the project configuration without deleting files. After compilation, it compares checksums with the original files.
* `objdiff-config`: Generates project configuration for [Objdiff.](https://github.com/encounter/objdiff)
* `compilation-test`: Run progress and matching build processes for avoiding compilation errors.

NOTE: `clean-build/clean-check` are obligatory if the configuration in the `Makefile` has been modified when intending to work on different overlays.

## Contributing
Contributions are welcome! Feel free to open a pull request. To help familiarize yourself with the decompilation workflow for *Silent Hill*, refer to our [Analysis Guide](https://github.com/Vatuu/silent-hill-decomp/blob/master/docs/Analysis%20Guide.md). For contributions to the repository, please follow our [Coding Conventions](https://github.com/Vatuu/silent-hill-decomp/blob/master/docs/Coding%20Conventions.md).

You can also reach out to us by opening an issue or joining the `#silent-hill` channel on the [PS1/PS2 Decompilation](https://discord.gg/VwCPdfbxgm) Discord server.
