<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<style>
*{box-sizing:border-box;margin:0;padding:0}
body{font-family:var(--font-sans);color:var(--color-text-primary);background:transparent}
.layout{display:flex;gap:0;min-height:600px}
.sidebar{width:220px;min-width:220px;border-right:0.5px solid var(--color-border-tertiary);padding:12px 0;position:sticky;top:0;height:600px;overflow-y:auto;flex-shrink:0}
.content{flex:1;padding:1.25rem 1.5rem;overflow-y:auto;height:600px}
.nav-group{margin-bottom:4px}
.nav-group-title{font-size:11px;font-weight:500;color:var(--color-text-secondary);padding:6px 14px 3px;text-transform:uppercase;letter-spacing:.05em}
.nav-item{display:block;font-size:12.5px;padding:5px 14px 5px 20px;color:var(--color-text-secondary);cursor:pointer;border-left:2px solid transparent;transition:all .15s;line-height:1.4}
.nav-item:hover{color:var(--color-text-primary);background:var(--color-background-secondary)}
.nav-item.active{color:#534AB7;border-left-color:#534AB7;background:#EEEDFE;font-weight:500}
.section{display:none}.section.show{display:block}
h1{font-size:20px;font-weight:500;margin-bottom:6px;color:var(--color-text-primary)}
h2{font-size:16px;font-weight:500;margin:1.25rem 0 .5rem;color:var(--color-text-primary);padding-left:8px;border-left:3px solid #7F77DD}
h3{font-size:14px;font-weight:500;margin:.9rem 0 .4rem;color:var(--color-text-primary)}
p,li{font-size:13.5px;line-height:1.7;color:var(--color-text-secondary);margin-bottom:.5rem}
ul{padding-left:1.2rem}
code{font-family:var(--font-mono);font-size:12px;background:var(--color-background-secondary);padding:1px 5px;border-radius:4px;color:#534AB7}
.cb{font-family:var(--font-mono);font-size:12px;background:var(--color-background-secondary);border:0.5px solid var(--color-border-tertiary);border-radius:8px;padding:.75rem 1rem;white-space:pre;overflow-x:auto;line-height:1.8;margin:.5rem 0;color:var(--color-text-primary)}
.kw{color:#534AB7;font-weight:500}.cm{color:var(--color-text-secondary)}.str{color:#0F6E56}.ann{color:#185FA5}
.tip{background:#EEEDFE;border-left:3px solid #7F77DD;border-radius:0 8px 8px 0;padding:8px 12px;font-size:13px;color:#3C3489;margin:.6rem 0;line-height:1.6}
.warn{background:#FAEEDA;border-left:3px solid #BA7517;border-radius:0 8px 8px 0;padding:8px 12px;font-size:13px;color:#633806;margin:.6rem 0;line-height:1.6}
.danger{background:#FCEBEB;border-left:3px solid #A32D2D;border-radius:0 8px 8px 0;padding:8px 12px;font-size:13px;color:#501313;margin:.6rem 0;line-height:1.6}
.good{background:#EAF3DE;border-left:3px solid #3B6D11;border-radius:0 8px 8px 0;padding:8px 12px;font-size:13px;color:#27500A;margin:.6rem 0;line-height:1.6}
.grid2{display:grid;grid-template-columns:1fr 1fr;gap:10px;margin:.5rem 0}
.grid3{display:grid;grid-template-columns:1fr 1fr 1fr;gap:10px;margin:.5rem 0}
.card{background:var(--color-background-primary);border:0.5px solid var(--color-border-tertiary);border-radius:10px;padding:.85rem 1rem}
.card.blue{border-left:3px solid #378ADD}.card.green{border-left:3px solid #639922}
.card.amber{border-left:3px solid #BA7517}.card.purple{border-left:3px solid #534AB7}
.card.coral{border-left:3px solid #D85A30}.card.teal{border-left:3px solid #1D9E75}
.card-title{font-size:13px;font-weight:500;color:var(--color-text-primary);margin-bottom:5px}
.badge{display:inline-block;font-size:11px;font-weight:500;padding:2px 8px;border-radius:10px;margin:2px}
.badge.blue{background:#E6F1FB;color:#185FA5}.badge.green{background:#EAF3DE;color:#3B6D11}
.badge.amber{background:#FAEEDA;color:#854F0B}.badge.purple{background:#EEEDFE;color:#534AB7}
.badge.red{background:#FCEBEB;color:#A32D2D}.badge.coral{background:#FAECE7;color:#993C1D}
tbl{width:100%;border-collapse:collapse;margin:.5rem 0;font-size:12.5px}
table.t{width:100%;border-collapse:collapse;margin:.5rem 0;font-size:12.5px}
table.t th{background:var(--color-background-secondary);color:var(--color-text-secondary);font-weight:500;text-align:left;padding:6px 8px;border:0.5px solid var(--color-border-tertiary)}
table.t td{padding:5px 8px;border:0.5px solid var(--color-border-tertiary);color:var(--color-text-primary);vertical-align:top}
table.t tr:nth-child(even) td{background:var(--color-background-secondary)}
.tag{font-size:11px;padding:2px 6px;border-radius:4px;background:var(--color-background-secondary);color:var(--color-text-secondary);border:0.5px solid var(--color-border-tertiary)}
.arrow{color:#7F77DD;font-weight:500;margin:0 4px}
.flow{display:flex;align-items:center;gap:6px;margin:4px 0;font-size:13px;flex-wrap:wrap}
.flow-box{background:var(--color-background-secondary);border:0.5px solid var(--color-border-tertiary);border-radius:6px;padding:3px 10px;font-size:12px;white-space:nowrap}
.flow-box.hl{background:#EEEDFE;border-color:#AFA9EC;color:#534AB7}
.tabs{display:flex;gap:4px;margin-bottom:8px;flex-wrap:wrap}
.tb{font-size:12px;padding:4px 10px;border:0.5px solid var(--color-border-tertiary);border-radius:20px;cursor:pointer;background:var(--color-background-secondary);color:var(--color-text-secondary);transition:all .15s}
.tb.on{background:#534AB7;color:#fff;border-color:#534AB7}
.tc{display:none}.tc.on{display:block}
.num{display:inline-flex;width:20px;height:20px;align-items:center;justify-content:center;background:#534AB7;color:#fff;border-radius:50%;font-size:11px;font-weight:500;flex-shrink:0}
.row{display:flex;align-items:flex-start;gap:8px;margin:4px 0}
.compare{display:grid;grid-template-columns:1fr 1fr;gap:10px}
.vs-label{text-align:center;font-size:11px;color:var(--color-text-secondary);margin-bottom:4px}
</style>
</head>
<body>
<h2 class="sr-only">Spring Data JPA Query Methods — Hướng dẫn đầy đủ 24 chủ đề</h2>
<div class="layout">

<!-- SIDEBAR -->
<div class="sidebar">
  <div class="nav-group">
    <div class="nav-group-title">Chiến lược</div>
    <div class="nav-item active" onclick="go(this,'s0')">Query Lookup Strategies</div>
    <div class="nav-item" onclick="go(this,'s1')">Declared Queries</div>
  </div>
  <div class="nav-group">
    <div class="nav-group-title">Tạo Query</div>
    <div class="nav-item" onclick="go(this,'s2')">Query Creation (Derived)</div>
    <div class="nav-item" onclick="go(this,'s3')">Annotation-based Config</div>
  </div>
  <div class="nav-group">
    <div class="nav-group-title">Named Query</div>
    <div class="nav-item" onclick="go(this,'s4')">Using JPA Named Queries</div>
    <div class="nav-item" onclick="go(this,'s5')">XML Named Query</div>
    <div class="nav-item" onclick="go(this,'s6')">Declaring Interfaces</div>
  </div>
  <div class="nav-group">
    <div class="nav-group-title">@Query</div>
    <div class="nav-item" onclick="go(this,'s7')">Using @Query</div>
    <div class="nav-item" onclick="go(this,'s8')">Advanced LIKE</div>
    <div class="nav-item" onclick="go(this,'s9')">Native Queries</div>
  </div>
  <div class="nav-group">
    <div class="nav-group-title">Query Rewriting</div>
    <div class="nav-item" onclick="go(this,'s10')">Introspection & Rewriting</div>
    <div class="nav-item" onclick="go(this,'s11')">Applying QueryRewriter</div>
  </div>
  <div class="nav-group">
    <div class="nav-group-title">Sắp xếp & Phân trang</div>
    <div class="nav-item" onclick="go(this,'s12')">Using Sort</div>
    <div class="nav-item" onclick="go(this,'s13')">JpaSort.unsafe() limits</div>
    <div class="nav-item" onclick="go(this,'s14')">Scrolling Large Results</div>
  </div>
  <div class="nav-group">
    <div class="nav-group-title">Tham số & SpEL</div>
    <div class="nav-item" onclick="go(this,'s15')">Named Parameters</div>
    <div class="nav-item" onclick="go(this,'s16')">Templated Queries & SpEL</div>
    <div class="nav-item" onclick="go(this,'s17')">Other Methods</div>
  </div>
  <div class="nav-group">
    <div class="nav-group-title">Thao tác ghi</div>
    <div class="nav-item" onclick="go(this,'s18')">Modifying Queries</div>
    <div class="nav-item" onclick="go(this,'s19')">Derived Delete Queries</div>
  </div>
  <div class="nav-group">
    <div class="nav-group-title">Tối ưu</div>
    <div class="nav-item" onclick="go(this,'s20')">Applying Query Hints</div>
    <div class="nav-item" onclick="go(this,'s21')">Adding Comments (@Meta)</div>
    <div class="nav-item" onclick="go(this,'s22')">Fetch- and LoadGraphs</div>
  </div>
  <div class="nav-group">
    <div class="nav-group-title">Scrolling nâng cao</div>
    <div class="nav-item" onclick="go(this,'s23')">Scrolling (Offset)</div>
    <div class="nav-item" onclick="go(this,'s24')">Scrolling (Keyset)</div>
  </div>
</div>

<!-- CONTENT -->
<div class="content">

<!-- S0: Query Lookup Strategies -->
<div class="section show" id="s0">
  <h1>Query Lookup Strategies</h1>
  <p>Spring Data JPA có <strong>3 chiến lược</strong> để tìm/tạo query khi gọi một repository method:</p>
  <div class="grid3" style="margin:.8rem 0">
    <div class="card purple">
      <div class="card-title">CREATE</div>
      <p>Luôn tạo query mới từ tên method. Bỏ qua Named Query nếu có.</p>
      <span class="badge purple">Mặc định nếu không tìm thấy Named Query</span>
    </div>
    <div class="card blue">
      <div class="card-title">USE_DECLARED_QUERY</div>
      <p>Chỉ dùng query đã khai báo (@Query hoặc @NamedQuery). Ném lỗi nếu không tìm thấy.</p>
      <span class="badge blue">Strict mode</span>
    </div>
    <div class="card green">
      <div class="card-title">CREATE_IF_NOT_FOUND (mặc định)</div>
      <p>Tìm Named Query trước → nếu không có thì tự tạo từ tên method.</p>
      <span class="badge green">Khuyên dùng</span>
    </div>
  </div>
  <h3>Cách cấu hình chiến lược</h3>
  <div class="cb"><span class="ann">@EnableJpaRepositories</span>(queryLookupStrategy = QueryLookupStrategy.Key.CREATE_IF_NOT_FOUND)
<span class="kw">class</span> AppConfig { }</div>
  <div class="tip"><strong>Luồng hoạt động mặc định (CREATE_IF_NOT_FOUND):</strong><br>
  Gọi method → Tìm @Query/@NamedQuery → Nếu không có → Phân tích tên method → Sinh JPQL</div>
  <h3>Lưu ý: Ký tự đặc biệt trong LIKE</h3>
  <p>Các keyword <code>StartingWith</code>, <code>EndingWith</code>, <code>Containing</code> sẽ tự động <strong>escape</strong> ký tự <code>%</code> và <code>_</code> trong tham số để tránh lỗi LIKE không mong muốn.</p>
  <div class="cb">findByFirstnameStartingWith(<span class="str">"50%"</span>)
<span class="cm">// Tự escape → WHERE firstname LIKE '50\%%'  (tìm đúng chữ "50%")</span></div>
</div>

<!-- S1: Declared Queries -->
<div class="section" id="s1">
  <h1>Declared Queries</h1>
  <p>Khi tên method quá dài hoặc cần tính năng JPQL mà derived query không hỗ trợ, ta <strong>khai báo query rõ ràng</strong> bằng một trong hai cách:</p>
  <div class="grid2" style="margin:.8rem 0">
    <div class="card blue">
      <div class="card-title">Cách 1 — JPA Named Query</div>
      <p>Định nghĩa query trên entity bằng <code>@NamedQuery</code> hoặc file <code>orm.xml</code>. Repository tự khớp theo tên.</p>
      <div class="cb" style="font-size:11px"><span class="ann">@NamedQuery</span>(name = <span class="str">"User.findByEmail"</span>,
  query = <span class="str">"select u from User u where u.email = ?1"</span>)</div>
    </div>
    <div class="card purple">
      <div class="card-title">Cách 2 — @Query trực tiếp</div>
      <p>Viết query ngay trên method trong Repository. Rõ ràng hơn, không cần sửa Entity.</p>
      <div class="cb" style="font-size:11px"><span class="ann">@Query</span>(<span class="str">"select u from User u where u.email = ?1"</span>)
User findByEmail(String email);</div>
    </div>
  </div>
  <div class="tip"><strong>Ưu tiên:</strong> <code>@Query</code> trên method > <code>@NamedQuery</code> trên entity > Named Query trong orm.xml. Nếu cùng tồn tại, @Query luôn thắng.</div>
</div>

<!-- S2: Query Creation -->
<div class="section" id="s2">
  <h1>Query Creation — Derived Query từ Tên Method</h1>
  <p>Spring phân tích tên method và tự sinh JPQL. Cấu trúc tên method:</p>
  <div class="flow" style="margin:.8rem 0">
    <div class="flow-box hl">find / count / exists / delete</div>
    <span class="arrow">+</span>
    <div class="flow-box">Distinct (tùy chọn)</div>
    <span class="arrow">+</span>
    <div class="flow-box hl">By</div>
    <span class="arrow">+</span>
    <div class="flow-box">Điều kiện 1</div>
    <span class="arrow">+</span>
    <div class="flow-box">And/Or + Điều kiện 2</div>
    <span class="arrow">+</span>
    <div class="flow-box">OrderBy... (tùy chọn)</div>
  </div>

  <div class="tabs">
    <div class="tb on" onclick="sw(this,'kw-cmp')">Số & Ngày</div>
    <div class="tb" onclick="sw(this,'kw-str')">Chuỗi</div>
    <div class="tb" onclick="sw(this,'kw-null')">Null & Bool</div>
    <div class="tb" onclick="sw(this,'kw-col')">Collection</div>
    <div class="tb" onclick="sw(this,'kw-logic')">Logic & Sắp xếp</div>
  </div>

  <div class="tc on" id="kw-cmp">
    <table class="t">
      <tr><th>Keyword</th><th>Ví dụ method</th><th>SQL sinh ra</th></tr>
      <tr><td><code>LessThan</code></td><td><code>findByAgeLessThan(18)</code></td><td><code>WHERE age &lt; 18</code></td></tr>
      <tr><td><code>LessThanEqual</code></td><td><code>findByAgeLessThanEqual(18)</code></td><td><code>WHERE age &lt;= 18</code></td></tr>
      <tr><td><code>GreaterThan</code></td><td><code>findByAgeGreaterThan(18)</code></td><td><code>WHERE age > 18</code></td></tr>
      <tr><td><code>GreaterThanEqual</code></td><td><code>findByAgeGreaterThanEqual(18)</code></td><td><code>WHERE age >= 18</code></td></tr>
      <tr><td><code>Between</code></td><td><code>findByAgeBetween(18, 30)</code></td><td><code>WHERE age BETWEEN 18 AND 30</code></td></tr>
      <tr><td><code>After</code></td><td><code>findByCreatedAtAfter(date)</code></td><td><code>WHERE created_at > ?1</code></td></tr>
      <tr><td><code>Before</code></td><td><code>findByCreatedAtBefore(date)</code></td><td><code>WHERE created_at &lt; ?1</code></td></tr>
    </table>
  </div>
  <div class="tc" id="kw-str">
    <table class="t">
      <tr><th>Keyword</th><th>Ví dụ method</th><th>SQL sinh ra</th></tr>
      <tr><td><code>Like</code></td><td><code>findByNameLike("%oh%")</code></td><td><code>WHERE name LIKE '%oh%'</code> (tự thêm %)</td></tr>
      <tr><td><code>NotLike</code></td><td><code>findByNameNotLike("%test%")</code></td><td><code>WHERE name NOT LIKE '%test%'</code></td></tr>
      <tr><td><code>StartingWith</code></td><td><code>findByNameStartingWith("Jo")</code></td><td><code>WHERE name LIKE 'Jo%'</code></td></tr>
      <tr><td><code>EndingWith</code></td><td><code>findByNameEndingWith("hn")</code></td><td><code>WHERE name LIKE '%hn'</code></td></tr>
      <tr><td><code>Containing</code></td><td><code>findByNameContaining("oh")</code></td><td><code>WHERE name LIKE '%oh%'</code></td></tr>
      <tr><td><code>IgnoreCase</code></td><td><code>findByNameIgnoreCase("john")</code></td><td><code>WHERE UPPER(name) = UPPER('john')</code></td></tr>
      <tr><td><code>Not</code></td><td><code>findByLastnameNot("Smith")</code></td><td><code>WHERE lastname &lt;> 'Smith'</code></td></tr>
    </table>
  </div>
  <div class="tc" id="kw-null">
    <table class="t">
      <tr><th>Keyword</th><th>Ví dụ method</th><th>SQL sinh ra</th></tr>
      <tr><td><code>IsNull / Null</code></td><td><code>findByPhoneIsNull()</code></td><td><code>WHERE phone IS NULL</code></td></tr>
      <tr><td><code>IsNotNull / NotNull</code></td><td><code>findByPhoneIsNotNull()</code></td><td><code>WHERE phone IS NOT NULL</code></td></tr>
      <tr><td><code>True</code></td><td><code>findByActiveTrue()</code></td><td><code>WHERE active = true</code></td></tr>
      <tr><td><code>False</code></td><td><code>findByActiveFalse()</code></td><td><code>WHERE active = false</code></td></tr>
      <tr><td><code>Is / Equals</code></td><td><code>findByStatusIs(status)</code></td><td><code>WHERE status = ?1</code> (hoặc IS NULL nếu null)</td></tr>
    </table>
    <div class="tip"><code>Is</code> và <code>Equals</code> tự xử lý null: nếu tham số là null → sinh <code>IS NULL</code>, không phải <code>= null</code>.</div>
  </div>
  <div class="tc" id="kw-col">
    <table class="t">
      <tr><th>Keyword</th><th>Ví dụ method</th><th>SQL sinh ra</th></tr>
      <tr><td><code>In</code></td><td><code>findByAgeIn(List.of(18,20,25))</code></td><td><code>WHERE age IN (18, 20, 25)</code></td></tr>
      <tr><td><code>NotIn</code></td><td><code>findByStatusNotIn(List.of("DELETED"))</code></td><td><code>WHERE status NOT IN ('DELETED')</code></td></tr>
    </table>
    <div class="tip">Chấp nhận bất kỳ <code>Collection</code>, array, hoặc varargs. Ví dụ: <code>findByAgeIn(18, 20, 25)</code> cũng hợp lệ.</div>
  </div>
  <div class="tc" id="kw-logic">
    <table class="t">
      <tr><th>Keyword</th><th>Ví dụ method</th><th>SQL sinh ra</th></tr>
      <tr><td><code>And</code></td><td><code>findByFirstnameAndLastname("John","Doe")</code></td><td><code>WHERE firstname='John' AND lastname='Doe'</code></td></tr>
      <tr><td><code>Or</code></td><td><code>findByFirstnameOrLastname("John","Doe")</code></td><td><code>WHERE firstname='John' OR lastname='Doe'</code></td></tr>
      <tr><td><code>Distinct</code></td><td><code>findDistinctByLastname("Doe")</code></td><td><code>SELECT DISTINCT ... WHERE lastname='Doe'</code></td></tr>
      <tr><td><code>OrderBy...Asc</code></td><td><code>findByAgeOrderByNameAsc(25)</code></td><td><code>WHERE age=25 ORDER BY name ASC</code></td></tr>
      <tr><td><code>OrderBy...Desc</code></td><td><code>findByAgeOrderByNameDesc(25)</code></td><td><code>WHERE age=25 ORDER BY name DESC</code></td></tr>
    </table>
    <div class="warn"><strong>Cảnh báo về Distinct:</strong> <code>findDistinctByLastname</code> sinh <code>SELECT DISTINCT u FROM User u WHERE ...</code> — vì bao gồm cả ID nên hầu như không lọc được trùng. Dùng <code>@Query</code> thủ công khi cần DISTINCT thực sự trên 1 field.</div>
  </div>

  <h3>Ví dụ thực tế kết hợp nhiều keyword</h3>
  <div class="cb">List&lt;User&gt; findByAgeBetweenAndActiveTrue<span class="cm">(int min, int max);</span>
<span class="cm">// → WHERE age BETWEEN ?1 AND ?2 AND active = true</span>

List&lt;User&gt; findByLastnameContainingIgnoreCaseOrderByFirstnameAsc<span class="cm">(String name);</span>
<span class="cm">// → WHERE UPPER(lastname) LIKE UPPER('%name%') ORDER BY firstname ASC</span>

Optional&lt;User&gt; findTopByOrderByCreatedAtDesc<span class="cm">();</span>
<span class="cm">// → Lấy 1 user mới nhất (không cần điều kiện Where)</span></div>
</div>

<!-- S3: Annotation-based Config -->
<div class="section" id="s3">
  <h1>Annotation-based Configuration</h1>
  <p>Thay vì dùng file <code>orm.xml</code>, ta định nghĩa Named Query trực tiếp trên Entity bằng annotation <code>@NamedQuery</code>.</p>
  <h3>Ưu điểm & Nhược điểm</h3>
  <div class="grid2">
    <div class="card green">
      <div class="card-title">✅ Ưu điểm</div>
      <ul><li>Không cần file XML riêng</li><li>Query gần với Entity → dễ tìm</li><li>IDE hỗ trợ kiểm tra cú pháp JPQL</li></ul>
    </div>
    <div class="card amber">
      <div class="card-title">⚠️ Nhược điểm</div>
      <ul><li>Thêm query mới → phải recompile Entity</li><li>Entity class bị "ô nhiễm" bởi persistence logic</li></ul>
    </div>
  </div>
  <h3>Cú pháp</h3>
  <div class="cb"><span class="ann">@Entity</span>
<span class="ann">@NamedQuery</span>(
  name  = <span class="str">"User.findByEmailAddress"</span>,    <span class="cm">// phải là "EntityName.methodName"</span>
  query = <span class="str">"select u from User u where u.emailAddress = ?1"</span>
)
<span class="kw">public class</span> User {
  <span class="ann">@Id</span> <span class="kw">private</span> Long id;
  <span class="kw">private</span> String emailAddress;
}</div>
  <div class="tip"><strong>Quy tắc đặt tên:</strong> <code>TênEntity.tênMethod</code> — Spring tự khớp. Ví dụ: entity <code>User</code> + method <code>findByEmailAddress</code> → tên Named Query phải là <code>User.findByEmailAddress</code>.</div>
  <h3>Nhiều Named Query trên 1 Entity</h3>
  <div class="cb"><span class="ann">@Entity</span>
<span class="ann">@NamedQueries</span>({
  <span class="ann">@NamedQuery</span>(name = <span class="str">"User.findByEmail"</span>, query = <span class="str">"select u from User u where u.email = ?1"</span>),
  <span class="ann">@NamedQuery</span>(name = <span class="str">"User.findActive"</span>, query = <span class="str">"select u from User u where u.active = true"</span>)
})
<span class="kw">public class</span> User { }</div>
</div>

<!-- S4: Using JPA Named Queries -->
<div class="section" id="s4">
  <h1>Using JPA Named Queries</h1>
  <p>Named Query là query được đặt tên và định nghĩa trước — có thể dùng JPQL hoặc SQL thuần (<code>@NamedNativeQuery</code>).</p>
  <h3>Cách Spring khớp Named Query với method</h3>
  <div class="flow" style="margin:.8rem 0">
    <div class="flow-box">Repository method được gọi</div>
    <span class="arrow">→</span>
    <div class="flow-box hl">Tìm: "TênEntity.tênMethod"</div>
    <span class="arrow">→</span>
    <div class="flow-box">Tìm thấy → dùng Named Query</div>
  </div>
  <div class="flow">
    <div style="width:200px"></div>
    <span class="arrow">→</span>
    <div class="flow-box amber" style="background:#FAEEDA;color:#633806;border-color:#BA7517">Không thấy → tạo từ tên method</div>
  </div>
  <h3>Ví dụ đầy đủ</h3>
  <div class="cb"><span class="cm">// 1. Định nghĩa trên Entity</span>
<span class="ann">@Entity</span>
<span class="ann">@NamedQuery</span>(name = <span class="str">"User.findByLastname"</span>,
            query = <span class="str">"select u from User u where u.lastname = ?1"</span>)
<span class="kw">public class</span> User { }

<span class="cm">// 2. Khai báo method trong Repository (cùng tên)</span>
<span class="kw">public interface</span> UserRepository <span class="kw">extends</span> JpaRepository&lt;User, Long&gt; {
  List&lt;User&gt; findByLastname(String lastname); <span class="cm">// ← Spring tự dùng Named Query ở trên</span>
}</div>
  <div class="tip">Named Query dùng JPQL nên portable giữa các database. Dùng <code>@NamedNativeQuery</code> khi cần SQL thuần nhưng sẽ mất tính portable.</div>
</div>

<!-- S5: XML Named Query -->
<div class="section" id="s5">
  <h1>XML Named Query Definition</h1>
  <p>Định nghĩa Named Query trong file <code>META-INF/orm.xml</code>. Phù hợp khi không muốn sửa Entity class.</p>
  <h3>Cấu trúc file orm.xml</h3>
  <div class="cb">&lt;<span class="kw">entity-mappings</span>&gt;
  &lt;<span class="kw">named-query</span> name=<span class="str">"User.findByLastname"</span>&gt;
    &lt;<span class="kw">query</span>&gt;select u from User u where u.lastname = ?1&lt;/<span class="kw">query</span>&gt;
  &lt;/<span class="kw">named-query</span>&gt;

  &lt;<span class="cm">!-- Dùng SQL thuần: --</span>&gt;
  &lt;<span class="kw">named-native-query</span> name=<span class="str">"User.findByEmailNative"</span>&gt;
    &lt;<span class="kw">query</span>&gt;SELECT * FROM users WHERE email = ?1&lt;/<span class="kw">query</span>&gt;
  &lt;/<span class="kw">named-native-query</span>&gt;
&lt;/<span class="kw">entity-mappings</span>&gt;</div>
  <div class="grid2">
    <div class="card green">
      <div class="card-title">Khi nên dùng XML</div>
      <ul><li>Query thay đổi theo môi trường (prod/dev)</li><li>Không muốn recompile Entity khi sửa query</li><li>Tách bạch business logic và persistence</li></ul>
    </div>
    <div class="card amber">
      <div class="card-title">Khi nên dùng Annotation</div>
      <ul><li>Nhóm nhỏ, ít query</li><li>Muốn IDE kiểm tra JPQL ngay lập tức</li><li>Code-first, không muốn thêm file XML</li></ul>
    </div>
  </div>
  <div class="warn">SpEL expression (<code>#{#entityName}</code>) <strong>không hoạt động</strong> trong XML Named Query — chỉ dùng được với <code>@Query</code> annotation.</div>
</div>

<!-- S6: Declaring Interfaces -->
<div class="section" id="s6">
  <h1>Declaring Interfaces cho Named Queries</h1>
  <p>Sau khi định nghĩa Named Query (bằng annotation hoặc XML), ta khai báo method tương ứng trong Repository interface.</p>
  <div class="cb"><span class="kw">public interface</span> UserRepository <span class="kw">extends</span> JpaRepository&lt;User, Long&gt; {

  <span class="cm">// Tự động khớp với Named Query "User.findByLastname"</span>
  List&lt;User&gt; findByLastname(String lastname);

  <span class="cm">// Tự động khớp với Named Query "User.findByEmailAddress"</span>
  User findByEmailAddress(String emailAddress);
}</div>
  <div class="tip"><strong>Quy tắc khớp tên:</strong> Spring ghép <code>TênEntity + "." + tênMethod</code> để tìm Named Query. Không cần annotation thêm — tên method phải khớp đúng phần sau dấu chấm.</div>
  <h3>Tổng quan luồng Named Query</h3>
  <div style="display:flex;flex-direction:column;gap:6px;margin:.8rem 0">
    <div class="row"><span class="num">1</span><div><strong>Định nghĩa query</strong> — trên Entity (<code>@NamedQuery</code>) hoặc file <code>orm.xml</code>, đặt tên dạng <code>"User.findByXxx"</code></div></div>
    <div class="row"><span class="num">2</span><div><strong>Khai báo method</strong> — trong Repository interface với tên method khớp phần sau dấu chấm</div></div>
    <div class="row"><span class="num">3</span><div><strong>Spring tự kết nối</strong> — khi gọi method, Spring tìm Named Query và thực thi, không cần @Query hay logic thêm</div></div>
  </div>
</div>

<!-- S7: Using @Query -->
<div class="section" id="s7">
  <h1>Using @Query</h1>
  <p>Viết JPQL hoặc SQL trực tiếp trên method trong Repository. Rõ ràng, linh hoạt, và có ưu tiên cao nhất.</p>

  <h3>JPQL cơ bản với vị trí tham số (?1, ?2)</h3>
  <div class="cb"><span class="ann">@Query</span>(<span class="str">"select u from User u where u.emailAddress = ?1"</span>)
User findByEmailAddress(String emailAddress);
<span class="cm">// ?1 = tham số thứ nhất, ?2 = thứ hai, ...</span></div>

  <h3>Tại sao dùng @Query thay vì Derived Query?</h3>
  <div class="grid2">
    <div class="card blue">
      <div class="card-title">Derived Query (tên method)</div>
      <div class="cb" style="font-size:11px">findByFirstnameStartingWithAndLastnameContainingAndAgeGreaterThanEqualOrderByCreatedAtDesc</div>
      <p style="color:#A32D2D;font-size:12px">❌ Tên quá dài, khó đọc, khó maintain</p>
    </div>
    <div class="card purple">
      <div class="card-title">@Query (JPQL thủ công)</div>
      <div class="cb" style="font-size:11px"><span class="ann">@Query</span>(<span class="str">"select u from User u where u.firstname like :fn% and u.lastname like %:ln% and u.age >= :age order by u.createdAt desc"</span>)
List&lt;User&gt; searchUsers(<span class="ann">@Param</span>(<span class="str">"fn"</span>) String fn, <span class="ann">@Param</span>(<span class="str">"ln"</span>) String ln, <span class="ann">@Param</span>(<span class="str">"age"</span>) int age);</div>
      <p style="color:#3B6D11;font-size:12px">✅ Rõ ràng, dễ đọc, dễ sửa</p>
    </div>
  </div>

  <h3>Ưu tiên khi nhiều query cùng tên</h3>
  <div class="flow" style="margin:.5rem 0">
    <div class="flow-box hl">@Query trên method</div>
    <span class="arrow">&gt;</span>
    <div class="flow-box">@NamedQuery trên Entity</div>
    <span class="arrow">&gt;</span>
    <div class="flow-box">Named Query trong orm.xml</div>
    <span class="arrow">&gt;</span>
    <div class="flow-box">Derived từ tên method</div>
  </div>
</div>

<!-- S8: Advanced LIKE -->
<div class="section" id="s8">
  <h1>Advanced LIKE Expressions trong @Query</h1>
  <p>Trong <code>@Query</code>, Spring nhận biết ký tự <code>%</code> trực tiếp trong chuỗi JPQL và xử lý hợp lệ.</p>
  <div class="grid3">
    <div class="card blue">
      <div class="card-title">Bắt đầu bằng (prefix)</div>
      <div class="cb" style="font-size:11px"><span class="ann">@Query</span>(<span class="str">"select u from User u where u.firstname like ?1%"</span>)
List&lt;User&gt; findStartsWith(String name);
<span class="cm">// findStartsWith("Jo") → LIKE 'Jo%'</span></div>
    </div>
    <div class="card green">
      <div class="card-title">Kết thúc bằng (suffix)</div>
      <div class="cb" style="font-size:11px"><span class="ann">@Query</span>(<span class="str">"select u from User u where u.firstname like %?1"</span>)
List&lt;User&gt; findEndsWith(String name);
<span class="cm">// findEndsWith("hn") → LIKE '%hn'</span></div>
    </div>
    <div class="card purple">
      <div class="card-title">Chứa chuỗi (contains)</div>
      <div class="cb" style="font-size:11px"><span class="ann">@Query</span>(<span class="str">"select u from User u where u.firstname like %?1%"</span>)
List&lt;User&gt; findContains(String name);
<span class="cm">// findContains("oh") → LIKE '%oh%'</span></div>
    </div>
  </div>
  <div class="tip">Spring tự nhận biết và loại bỏ <code>%</code> trong JPQL string trước khi gửi cho JPA provider, rồi tự append/prepend <code>%</code> vào tham số runtime. Không cần tự thêm <code>%</code> trong code Java.</div>
  <h3>Chống SQL Injection với escape()</h3>
  <div class="cb"><span class="ann">@Query</span>(<span class="str">"select u from User u where u.firstname like %?#{escape([0])}% escape ?#{escapeCharacter()}"</span>)
List&lt;User&gt; findContainingEscaped(String namePart);

<span class="cm">// findContainingEscaped("Peter_")
//   → tìm "Peter_Parker" ✅
//   → KHÔNG tìm "PeterXParker" ✅ (vì _ bị escape thành \_ hoặc ký tự escape đã cấu hình)</span></div>
  <div class="warn">Nếu input từ user chứa <code>%</code> hoặc <code>_</code> và không escape → attacker có thể lấy data không mong muốn. Luôn dùng <code>escape()</code> khi LIKE với input không tin cậy.</div>
</div>

<!-- S9: Native Queries -->
<div class="section" id="s9">
  <h1>Native Queries</h1>
  <p>Dùng SQL thuần thay vì JPQL. Áp dụng khi cần tính năng SQL đặc thù của database.</p>

  <h3>Khai báo cơ bản</h3>
  <div class="cb"><span class="ann">@NativeQuery</span>(value = <span class="str">"SELECT * FROM USERS WHERE EMAIL_ADDRESS = ?1"</span>)
User findByEmailAddress(String emailAddress);

<span class="cm">// Tương đương @Query(value="...", nativeQuery=true)</span>
<span class="cm">// @NativeQuery có thêm thuộc tính sqlResultSetMapping</span></div>

  <h3>Native Query với phân trang (cần countQuery)</h3>
  <div class="cb"><span class="ann">@NativeQuery</span>(
  value = <span class="str">"SELECT * FROM USERS WHERE LASTNAME = ?1"</span>,
  countQuery = <span class="str">"SELECT count(*) FROM USERS WHERE LASTNAME = ?1"</span>
)
Page&lt;User&gt; findByLastname(String lastname, Pageable pageable);
<span class="cm">// Nếu không có countQuery, Spring cố rewrite query → sai với SQL phức tạp</span></div>

  <h3>Trả về Map (raw column/value)</h3>
  <div class="cb"><span class="ann">@NativeQuery</span>(<span class="str">"SELECT * FROM USERS WHERE EMAIL_ADDRESS = ?1"</span>)
Map&lt;String, Object&gt; findRawByEmail(String email);         <span class="cm">// 1 dòng</span>

<span class="ann">@NativeQuery</span>(<span class="str">"SELECT * FROM USERS WHERE LASTNAME = ?1"</span>)
List&lt;Map&lt;String, Object&gt;&gt; findRawByLastname(String name); <span class="cm">// nhiều dòng</span>

<span class="cm">// Key = tên cột DB (thường UPPER_CASE), Value = giá trị thực tế</span>
<span class="cm">// Hữu ích khi cần đọc dữ liệu mà không map vào Entity</span></div>

  <div class="grid2">
    <div class="card green">
      <div class="card-title">Khi nên dùng Native Query</div>
      <ul><li>Stored procedures / functions</li><li>Window functions (ROW_NUMBER, RANK)</li><li>Database-specific features (JSONB, full-text search)</li><li>Performance-critical query cần hint SQL</li></ul>
    </div>
    <div class="card amber">
      <div class="card-title">Nhược điểm</div>
      <ul><li>Không portable giữa các database</li><li>Khó dùng với phân trang phức tạp</li><li>Chỉ Hibernate hỗ trợ String-based Tuple</li></ul>
    </div>
  </div>
</div>

<!-- S10: Introspection & Rewriting -->
<div class="section" id="s10">
  <h1>Query Introspection and Rewriting</h1>
  <p>Spring Data JPA tự động phân tích và cải tiến query trước khi thực thi — gọi là <em>query introspection</em>.</p>
  <h3>Spring Data JPA tự động làm được gì?</h3>
  <div style="display:flex;flex-direction:column;gap:6px;margin:.8rem 0">
    <div class="row"><span class="num">1</span><div><strong>Projection rewriting</strong> — nếu return type là interface projection, Spring chạy tuple query thay vì load toàn bộ entity</div></div>
    <div class="row"><span class="num">2</span><div><strong>DTO projection</strong> — nếu query dùng constructor expression hoặc multi-select, Spring tự rewrite projection</div></div>
    <div class="row"><span class="num">3</span><div><strong>Dynamic sorting</strong> — tự append ORDER BY khi truyền <code>Sort</code> object</div></div>
    <div class="row"><span class="num">4</span><div><strong>COUNT query</strong> — tự derive COUNT query cho phân trang</div></div>
  </div>
  <h3>Query Parser hỗ trợ</h3>
  <div class="grid2">
    <div class="card green">
      <div class="card-title">HQL (Hibernate) & EQL (EclipseLink)</div>
      <p>Được hỗ trợ đầy đủ — Spring có Query Parser riêng hiểu cú pháp phương ngữ này.</p>
    </div>
    <div class="card amber">
      <div class="card-title">Native SQL</div>
      <p>Chỉ hỗ trợ query đơn giản. Query phức tạp cần JSqlParser hoặc cung cấp <code>countQuery</code> thủ công.</p>
    </div>
  </div>
  <h3>Cấu hình QueryEnhancerSelector tùy chỉnh</h3>
  <div class="cb"><span class="ann">@Configuration</span>
<span class="ann">@EnableJpaRepositories</span>(queryEnhancerSelector = MyQueryEnhancerSelector.class)
<span class="kw">class</span> ApplicationConfig { }

<span class="cm">// Implement interface QueryEnhancerSelector để chọn QueryEnhancer phù hợp</span>
<span class="cm">// theo từng query — hữu ích khi dùng nhiều JPA provider hoặc SQL dialect</span></div>
  <div class="tip">Nếu dùng query phức tạp với native SQL, thêm JSqlParser vào classpath — Spring sẽ tự dùng nó để phân tích và rewrite query tốt hơn.</div>
</div>

<!-- S11: QueryRewriter -->
<div class="section" id="s11">
  <h1>Applying a QueryRewriter</h1>
  <p>Cho phép can thiệp và sửa đổi câu query ở thời điểm cuối cùng — ngay trước khi gửi đến <code>EntityManager</code>.</p>
  <h3>Khi nào cần QueryRewriter?</h3>
  <ul style="margin:.5rem 0">
    <li>Cần thêm điều kiện động vào query (multi-tenant, soft-delete)</li>
    <li>Thay thế placeholder trong query string lúc runtime</li>
    <li>Áp dụng hint hoặc comment database-specific</li>
  </ul>
  <h3>Bước 1 — Implement QueryRewriter</h3>
  <div class="cb"><span class="kw">public class</span> MyQueryRewriter <span class="kw">implements</span> QueryRewriter {
  <span class="ann">@Override</span>
  <span class="kw">public</span> String rewrite(String query, Sort sort) {
    <span class="cm">// Thay tên alias trong query trước khi thực thi</span>
    <span class="kw">return</span> query.replaceAll(<span class="str">"original_user_alias"</span>, <span class="str">"rewritten_user_alias"</span>);
  }
}</div>
  <h3>Bước 2 — Khai báo trong Repository</h3>
  <div class="cb"><span class="kw">public interface</span> MyRepository <span class="kw">extends</span> JpaRepository&lt;User, Long&gt; {

  <span class="ann">@NativeQuery</span>(value = <span class="str">"select original_user_alias.* from SD_USER original_user_alias"</span>,
              queryRewriter = MyQueryRewriter.class)
  List&lt;User&gt; findByNativeQuery(String param);

  <span class="ann">@Query</span>(value = <span class="str">"select original_user_alias from User original_user_alias"</span>,
         queryRewriter = MyQueryRewriter.class)
  List&lt;User&gt; findByNonNativeQuery(String param);
}</div>
  <h3>Cách thay thế — Repository tự implement QueryRewriter</h3>
  <div class="cb"><span class="kw">public interface</span> MyRepository <span class="kw">extends</span> JpaRepository&lt;User, Long&gt;, QueryRewriter {

  <span class="ann">@Query</span>(value = <span class="str">"select original_user_alias from User original_user_alias"</span>,
         queryRewriter = MyRepository.class)  <span class="cm">// ← trỏ về chính mình</span>
  List&lt;User&gt; findByNonNativeQuery(String param);

  <span class="ann">@Override</span>
  <span class="kw">default</span> String rewrite(String query, Sort sort) {
    <span class="kw">return</span> query.replaceAll(<span class="str">"original_user_alias"</span>, <span class="str">"rewritten_user_alias"</span>);
  }
}</div>
  <div class="tip">QueryRewriter áp dụng cho cả query chính lẫn count query (khi dùng phân trang).</div>
</div>

<!-- S12: Sort -->
<div class="section" id="s12">
  <h1>Using Sort</h1>
  <p>Truyền <code>Sort</code> object vào method để sắp xếp động thay vì hard-code <code>OrderBy</code> trong tên method.</p>
  <h3>Các kiểu Sort</h3>
  <div class="cb"><span class="ann">@Query</span>(<span class="str">"select u from User u where u.lastname like ?1%"</span>)
List&lt;User&gt; findByAndSort(String lastname, Sort sort);

<span class="cm">// ✅ Sort theo field trong entity</span>
repo.findByAndSort(<span class="str">"stark"</span>, Sort.by(<span class="str">"firstname"</span>));
repo.findByAndSort(<span class="str">"stark"</span>, Sort.by(Sort.Direction.DESC, <span class="str">"age"</span>));

<span class="cm">// ❌ Sort theo function → ném Exception</span>
repo.findByAndSort(<span class="str">"stark"</span>, Sort.by(<span class="str">"LENGTH(firstname)"</span>));

<span class="cm">// ✅ Sort theo function dùng JpaSort.unsafe()</span>
repo.findByAndSort(<span class="str">"stark"</span>, JpaSort.unsafe(<span class="str">"LENGTH(firstname)"</span>));</div>

  <h3>Sort theo alias trong query</h3>
  <div class="cb"><span class="ann">@Query</span>(<span class="str">"select u.id, LENGTH(u.firstname) as fn_len from User u where u.lastname like ?1%"</span>)
List&lt;Object[]&gt; findByAsArrayAndSort(String lastname, Sort sort);

<span class="cm">// ✅ Sort theo alias "fn_len" đã khai báo trong query</span>
repo.findByAsArrayAndSort(<span class="str">"bolton"</span>, Sort.by(<span class="str">"fn_len"</span>));</div>

  <h3>Kết hợp Sort với PageRequest</h3>
  <div class="cb">Pageable pageable = PageRequest.of(0, 10, Sort.by(<span class="str">"lastname"</span>).ascending()
                                              .and(Sort.by(<span class="str">"firstname"</span>).descending()));
Page&lt;User&gt; page = repo.findByActive(true, pageable);</div>
</div>

<!-- S13: JpaSort.unsafe limits -->
<div class="section" id="s13">
  <h1>JpaSort.unsafe() — Giới hạn và Lưu ý</h1>
  <p><code>JpaSort.unsafe()</code> cho phép sort theo biểu thức tùy ý — nhưng có hai chế độ hoạt động khác nhau.</p>
  <div class="grid2">
    <div class="card blue">
      <div class="card-title">Chế độ 1 — String-based Query</div>
      <p>Khi dùng với Derived Query hoặc <code>@Query</code> dạng string, biểu thức sort được <strong>append thẳng</strong> vào cuối query string.</p>
      <div class="cb" style="font-size:11px">JpaSort.unsafe(<span class="str">"LENGTH(firstname)"</span>)
<span class="cm">// → ... ORDER BY LENGTH(firstname)</span></div>
      <p>Hỗ trợ: function calls, arithmetic, CASE WHEN</p>
    </div>
    <div class="card amber">
      <div class="card-title">Chế độ 2 — CriteriaQuery</div>
      <p>Khi dùng với Query by Example hoặc Specifications, biểu thức được <strong>parse và thêm vào CriteriaQuery</strong> dạng expression.</p>
      <div class="cb" style="font-size:11px">JpaSort.unsafe(<span class="str">"u.age + 1"</span>)
<span class="cm">// → parse → CriteriaQuery.orderBy()</span></div>
      <p>Hỗ trợ: function calls, CASE WHEN, arithmetic, property paths</p>
    </div>
  </div>
  <div class="danger"><strong>Không hỗ trợ trong cả hai chế độ:</strong> subquery expressions, <code>TREAT</code>, <code>CAST</code>. Dùng các tính năng này → phải viết <code>@Query</code> hoàn toàn thủ công.</div>
  <h3>Ví dụ CASE WHEN trong sort</h3>
  <div class="cb">Sort sort = JpaSort.unsafe(<span class="str">"CASE WHEN u.status = 'ACTIVE' THEN 0 ELSE 1 END"</span>);
<span class="cm">// → ORDER BY CASE WHEN u.status = 'ACTIVE' THEN 0 ELSE 1 END</span>
<span class="cm">// Kết quả: user ACTIVE hiện lên đầu</span></div>
</div>

<!-- S14: Scrolling -->
<div class="section" id="s14">
  <h1>Scrolling Large Query Results</h1>
  <p>Khi dataset lớn, không nên load tất cả vào memory. Spring Data JPA cung cấp 3 phương án:</p>
  <div class="grid3">
    <div class="card blue">
      <div class="card-title">Paging (Pageable)</div>
      <p>Phân trang truyền thống. Cần tổng số kết quả (count query). Phù hợp với UI phân trang.</p>
      <span class="badge blue">Phổ biến nhất</span>
    </div>
    <div class="card amber">
      <div class="card-title">Offset Scrolling</div>
      <p>Nhẹ hơn paging — không cần count query. Nhưng DB vẫn phải materialize toàn bộ kết quả.</p>
      <span class="badge amber">Trung bình</span>
    </div>
    <div class="card green">
      <div class="card-title">Keyset Scrolling</div>
      <p>Dùng giá trị dòng cuối làm "con trỏ". DB chỉ đọc từ vị trí đó → hiệu quả nhất với index.</p>
      <span class="badge green">Hiệu quả nhất</span>
    </div>
  </div>
  <h3>Dùng WindowIterator — API đơn giản nhất</h3>
  <div class="cb"><span class="cm">// Duyệt tất cả kết quả mà không cần loop phức tạp</span>
WindowIterator&lt;User&gt; users = WindowIterator.of(
    position -&gt; repo.findFirst10ByLastnameOrderByFirstname(<span class="str">"Doe"</span>, position))
  .startingAt(ScrollPosition.offset()); <span class="cm">// hoặc ScrollPosition.keyset()</span>

<span class="kw">while</span> (users.hasNext()) {
  User u = users.next();
  <span class="cm">// xử lý từng user</span>
}</div>
  <div class="warn">Scrolling <strong>không hỗ trợ</strong> với String-based query methods và <code>@StoredProcedure</code>. Phải dùng với Derived Query, Query-by-Example, hoặc Querydsl.</div>
</div>

<!-- S15: Named Parameters -->
<div class="section" id="s15">
  <h1>Using Named Parameters</h1>
  <p>Mặc định Spring dùng <strong>position-based binding</strong> (<code>?1</code>, <code>?2</code>...). Khi đổi vị trí tham số → query sai. Dùng <code>@Param</code> để binding theo tên thay vì vị trí.</p>

  <div class="compare">
    <div>
      <div class="vs-label" style="color:#A32D2D">❌ Position-based (dễ bị lỗi)</div>
      <div class="cb"><span class="ann">@Query</span>(<span class="str">"select u from User u where u.firstname = ?1 or u.lastname = ?2"</span>)
User find(String lastname, String firstname);
<span class="cm">// Đặt firstname ở ?1 nhưng truyền lastname trước
// → Sai kết quả, không có lỗi compile!</span></div>
    </div>
    <div>
      <div class="vs-label" style="color:#3B6D11">✅ Named Parameters (an toàn)</div>
      <div class="cb"><span class="ann">@Query</span>(<span class="str">"select u from User u where u.firstname = :firstname or u.lastname = :lastname"</span>)
User find(<span class="ann">@Param</span>(<span class="str">"lastname"</span>) String lastname,
          <span class="ann">@Param</span>(<span class="str">"firstname"</span>) String firstname);
<span class="cm">// Đúng dù đổi vị trí tham số trong method</span></div>
    </div>
  </div>

  <div class="tip"><strong>Spring Boot 3+ / Java 8+ với flag <code>-parameters</code>:</strong> Nếu bật flag compiler này, Spring tự đọc tên tham số — không cần <code>@Param</code>. Tuy nhiên vẫn nên dùng <code>@Param</code> để code rõ ràng và portable.</div>
</div>

<!-- S16: SpEL -->
<div class="section" id="s16">
  <h1>Templated Queries và SpEL Expressions</h1>
  <p>Spring Data JPA hỗ trợ biểu thức SpEL và property placeholder trong <code>@Query</code> để tạo query động và tái sử dụng.</p>

  <h3>1. #{#entityName} — Tên Entity động</h3>
  <div class="cb"><span class="ann">@Query</span>(<span class="str">"select u from #{#entityName} u where u.lastname = ?1"</span>)
List&lt;User&gt; findByLastname(String lastname);
<span class="cm">// #{#entityName} = tên entity từ @Entity(name="...") hoặc tên class
// Hữu ích khi làm generic repository cho nhiều entity con</span></div>

  <h3>2. Generic Repository với Inheritance</h3>
  <div class="cb"><span class="ann">@MappedSuperclass</span>
<span class="kw">public abstract class</span> AbstractType { String attribute; }

<span class="ann">@Entity</span> <span class="kw">public class</span> ConcreteType <span class="kw">extends</span> AbstractType { }

<span class="ann">@NoRepositoryBean</span>
<span class="kw">public interface</span> MappedTypeRepository&lt;T <span class="kw">extends</span> AbstractType&gt; <span class="kw">extends</span> Repository&lt;T, Long&gt; {
  <span class="ann">@Query</span>(<span class="str">"select t from #{#entityName} t where t.attribute = ?1"</span>)
  List&lt;T&gt; findAllByAttribute(String attribute);
}

<span class="kw">public interface</span> ConcreteRepository <span class="kw">extends</span> MappedTypeRepository&lt;ConcreteType&gt; { }
<span class="cm">// findAllByAttribute() sẽ query: "select t from ConcreteType t where t.attribute = ?1"</span></div>

  <h3>3. Truy cập tham số bằng index trong SpEL</h3>
  <div class="cb"><span class="ann">@Query</span>(<span class="str">"select u from User u where u.firstname = ?1 and u.firstname=?#{[0]} and u.email = ?#{principal.emailAddress}"</span>)
List&lt;User&gt; findByFirstnameAndCurrentUser(String firstname);
<span class="cm">// ?#{[0]} = tham số thứ nhất theo index
// ?#{principal.emailAddress} = lấy email từ Spring Security context</span></div>

  <h3>4. Property Placeholder — Giá trị từ application.properties</h3>
  <div class="cb"><span class="ann">@Query</span>(<span class="str">"select u from User u where u.appName = ?${spring.application.name:unknown}"</span>)
List&lt;User&gt; findByApp();
<span class="cm">// Đọc spring.application.name từ Environment lúc runtime
// ":unknown" là fallback nếu property không tồn tại</span></div>
</div>

<!-- S17: Other Methods -->
<div class="section" id="s17">
  <h1>Other Methods — Khi Query quá phức tạp</h1>
  <p>Khi cả Derived Query lẫn <code>@Query</code> không đủ, có 3 lựa chọn thay thế:</p>
  <div style="display:flex;flex-direction:column;gap:10px;margin:.8rem 0">
    <div class="card purple">
      <div class="card-title">① Custom Repository Implementation</div>
      <p>Tạo interface riêng, implement thủ công, đăng ký vào Repository. Có toàn quyền dùng <code>EntityManager</code>, Criteria API, HQL, hay JdbcTemplate.</p>
      <div class="cb" style="font-size:11px"><span class="kw">interface</span> UserRepositoryCustom {
  List&lt;User&gt; findComplexQuery(String param);
}

<span class="kw">class</span> UserRepositoryImpl <span class="kw">implements</span> UserRepositoryCustom {
  <span class="ann">@PersistenceContext</span> EntityManager em;
  <span class="ann">@Override</span>
  <span class="kw">public</span> List&lt;User&gt; findComplexQuery(String param) {
    <span class="kw">return</span> em.createQuery(<span class="str">"..."</span>, User.class).getResultList();
  }
}

<span class="kw">interface</span> UserRepository <span class="kw">extends</span> JpaRepository&lt;User,Long&gt;, UserRepositoryCustom { }</div>
    </div>
    <div class="card blue">
      <div class="card-title">② Stored Procedures</div>
      <p>Đặt query trong database, gọi từ Spring bằng <code>@StoredProcedure</code> hoặc <code>@Query("CALL myProc(?1)")</code>.</p>
    </div>
    <div class="card green">
      <div class="card-title">③ Third-party Toolkit</div>
      <p>Dùng QueryDSL, jOOQ, hoặc Spring JdbcTemplate cho những trường hợp cần SQL động phức tạp.</p>
    </div>
  </div>
</div>

<!-- S18: Modifying Queries -->
<div class="section" id="s18">
  <h1>Modifying Queries — UPDATE & DELETE</h1>
  <p>Dùng <code>@Modifying</code> cùng <code>@Query</code> để thực thi UPDATE hoặc DELETE. Bắt buộc chạy trong <code>@Transactional</code>.</p>

  <h3>UPDATE cơ bản</h3>
  <div class="cb"><span class="ann">@Modifying</span>
<span class="ann">@Query</span>(<span class="str">"update User u set u.firstname = ?1 where u.lastname = ?2"</span>)
<span class="kw">int</span> setFixedFirstnameFor(String firstname, String lastname);
<span class="cm">// Trả về số dòng bị ảnh hưởng (affected rows)</span></div>

  <h3>Vấn đề EntityManager cache sau Modifying</h3>
  <div class="danger"><strong>Vấn đề thường gặp:</strong> Sau khi chạy <code>@Modifying</code>, EntityManager vẫn giữ entity cũ trong cache 1st-level. Nếu đọc lại entity đó trong cùng transaction → lấy dữ liệu cũ!</div>
  <div class="compare">
    <div>
      <div class="vs-label" style="color:#A32D2D">❌ Không có clearAutomatically</div>
      <div class="cb" style="font-size:11px"><span class="ann">@Modifying</span>
<span class="ann">@Query</span>(<span class="str">"update User u set u.age = 99 where u.id = ?1"</span>)
<span class="kw">void</span> updateAge(Long id);

<span class="cm">// Sau khi gọi updateAge(1L):
// repo.findById(1L) → vẫn trả về age cũ từ cache!</span></div>
    </div>
    <div>
      <div class="vs-label" style="color:#3B6D11">✅ Với clearAutomatically</div>
      <div class="cb" style="font-size:11px"><span class="ann">@Modifying</span>(clearAutomatically = true)
<span class="ann">@Query</span>(<span class="str">"update User u set u.age = 99 where u.id = ?1"</span>)
<span class="kw">void</span> updateAge(Long id);

<span class="cm">// Spring tự clear EntityManager cache sau khi update
// repo.findById(1L) → trả về age = 99 đúng</span></div>
    </div>
  </div>
  <div class="tip"><code>@Modifying</code> chỉ dùng được với <code>@Query</code>. Với derived method (không có @Query) thì không cần và không dùng @Modifying.</div>
</div>

<!-- S19: Derived Delete -->
<div class="section" id="s19">
  <h1>Derived Delete Queries</h1>
  <p>Spring Data JPA hỗ trợ tạo DELETE query tự động từ tên method — tương tự derived find.</p>

  <div class="compare">
    <div>
      <div class="vs-label">Derived Delete (load trước khi xóa)</div>
      <div class="cb" style="font-size:11px"><span class="kw">void</span> deleteByRoleId(<span class="kw">long</span> roleId);</div>
      <p style="font-size:12px;margin-top:4px">Spring làm 2 bước:</p>
      <div style="display:flex;flex-direction:column;gap:3px;font-size:12px">
        <div class="row"><span class="num">1</span><div>SELECT * FROM users WHERE role_id = ?</div></div>
        <div class="row"><span class="num">2</span><div>Load từng entity → gọi <code>@PreRemove</code> lifecycle → DELETE từng cái</div></div>
      </div>
    </div>
    <div>
      <div class="vs-label">Bulk Delete (@Modifying)</div>
      <div class="cb" style="font-size:11px"><span class="ann">@Modifying</span>
<span class="ann">@Query</span>(<span class="str">"delete from User u where u.role.id = ?1"</span>)
<span class="kw">void</span> deleteInBulkByRoleId(<span class="kw">long</span> roleId);</div>
      <p style="font-size:12px;margin-top:4px">Spring làm 1 bước:</p>
      <div style="display:flex;flex-direction:column;gap:3px;font-size:12px">
        <div class="row"><span class="num">1</span><div>DELETE FROM users WHERE role_id = ? — một câu SQL duy nhất</div></div>
      </div>
    </div>
  </div>

  <h3>So sánh quan trọng</h3>
  <table class="t" style="margin-top:.5rem">
    <tr><th></th><th>deleteByRoleId (derived)</th><th>deleteInBulkByRoleId (@Query)</th></tr>
    <tr><td>Số SQL</td><td>N+1 (1 SELECT + N DELETE)</td><td>1 DELETE duy nhất</td></tr>
    <tr><td>@PreRemove / @PostRemove</td><td>✅ Được gọi</td><td>❌ Không được gọi</td></tr>
    <tr><td>Cascade delete</td><td>✅ JPA tự xử lý</td><td>❌ Phải tự xử lý</td></tr>
    <tr><td>Performance</td><td>Chậm với dataset lớn</td><td>Rất nhanh</td></tr>
    <tr><td>Memory</td><td>Load toàn bộ vào memory</td><td>Không cần</td></tr>
  </table>
  <div class="warn"><strong>Chọn dựa trên nhu cầu:</strong> Cần lifecycle callback hoặc cascade → dùng derived delete. Cần performance và dataset lớn → dùng @Modifying bulk delete.</div>
</div>

<!-- S20: Query Hints -->
<div class="section" id="s20">
  <h1>Applying Query Hints</h1>
  <p>JPA Query Hints cho phép truyền gợi ý đặc thù tới JPA provider (Hibernate, EclipseLink) để tối ưu thực thi query.</p>
  <h3>Ví dụ cơ bản</h3>
  <div class="cb"><span class="ann">@QueryHints</span>(value = {
  <span class="ann">@QueryHint</span>(name = <span class="str">"jakarta.persistence.query.timeout"</span>, value = <span class="str">"5000"</span>), <span class="cm">// timeout 5s</span>
  <span class="ann">@QueryHint</span>(name = <span class="str">"org.hibernate.fetchSize"</span>, value = <span class="str">"50"</span>)         <span class="cm">// batch 50 dòng</span>
}, forCounting = false)  <span class="cm">// không áp hint cho count query khi phân trang</span>
Page&lt;User&gt; findByLastname(String lastname, Pageable pageable);</div>

  <h3>Các Query Hint phổ biến</h3>
  <table class="t">
    <tr><th>Hint Name</th><th>Mục đích</th><th>Ví dụ giá trị</th></tr>
    <tr><td><code>jakarta.persistence.query.timeout</code></td><td>Timeout query (ms)</td><td><code>"5000"</code></td></tr>
    <tr><td><code>org.hibernate.fetchSize</code></td><td>Số dòng fetch mỗi lần</td><td><code>"50"</code></td></tr>
    <tr><td><code>org.hibernate.readOnly</code></td><td>Query chỉ đọc, tắt dirty check</td><td><code>"true"</code></td></tr>
    <tr><td><code>org.hibernate.cacheable</code></td><td>Cache kết quả query (2nd-level cache)</td><td><code>"true"</code></td></tr>
    <tr><td><code>jakarta.persistence.cache.retrieveMode</code></td><td>Cách lấy từ cache</td><td><code>"USE"</code></td></tr>
  </table>
  <div class="tip"><code>forCounting = false</code>: khi dùng phân trang, Spring chạy thêm count query — tắt hint ở đây nếu hint không liên quan hoặc gây lỗi cho count query.</div>
</div>

<!-- S21: Comments -->
<div class="section" id="s21">
  <h1>Adding Comments to Queries — @Meta</h1>
  <p>Thêm comment vào SQL được gửi đến database để DBA nhận biết query đến từ đâu trong code.</p>
  <h3>Khai báo @Meta</h3>
  <div class="cb"><span class="kw">public interface</span> RoleRepository <span class="kw">extends</span> JpaRepository&lt;Role, Integer&gt; {

  <span class="ann">@Meta</span>(comment = <span class="str">"find roles by name"</span>)
  List&lt;Role&gt; findByName(String name);

  <span class="ann">@Meta</span>(comment = <span class="str">"count roles for a given name"</span>)
  <span class="kw">long</span> countByName(String name);

  <span class="ann">@Override</span>
  <span class="ann">@Meta</span>(comment = <span class="str">"find roles using QBE"</span>)
  &lt;S <span class="kw">extends</span> Role&gt; List&lt;S&gt; findAll(Example&lt;S&gt; example);
}</div>

  <h3>Bật comment trong application.properties</h3>
  <div class="grid2">
    <div class="card blue">
      <div class="card-title">Hibernate</div>
      <div class="cb" style="font-size:11px">spring.jpa.properties.hibernate.use_sql_comments=true</div>
      <p style="font-size:12px">Log sẽ hiện: <code>/* find roles by name */ SELECT ...</code></p>
    </div>
    <div class="card green">
      <div class="card-title">EclipseLink</div>
      <div class="cb" style="font-size:11px">spring.jpa.properties.eclipselink.logging.level.sql=FINE</div>
    </div>
  </div>
  <div class="warn">Không phải tất cả operation đều hỗ trợ comment. <code>entityManager.createQuery()</code> có hỗ trợ, nhưng <code>entityManager.find()</code> thì không.</div>
</div>

<!-- S22: EntityGraph -->
<div class="section" id="s22">
  <h1>Configuring Fetch- and LoadGraphs</h1>
  <p>Giải quyết N+1 query problem. Khi load entity có <code>@ManyToMany/@OneToMany</code> lazy, dùng <code>@EntityGraph</code> để chỉ định fetch join.</p>

  <h3>FETCH vs LOAD — Sự khác biệt</h3>
  <div class="grid2">
    <div class="card blue">
      <div class="card-title">EntityGraphType.FETCH</div>
      <p>Các field được liệt kê → <strong>EAGER</strong>. Các field còn lại → <strong>LAZY</strong> (bất kể mapping).</p>
    </div>
    <div class="card green">
      <div class="card-title">EntityGraphType.LOAD</div>
      <p>Các field được liệt kê → <strong>EAGER</strong>. Các field còn lại → <strong>giữ nguyên mapping gốc</strong>.</p>
    </div>
  </div>

  <h3>Cách 1 — Named EntityGraph (@NamedEntityGraph)</h3>
  <div class="cb"><span class="cm">// Trên Entity</span>
<span class="ann">@Entity</span>
<span class="ann">@NamedEntityGraph</span>(name = <span class="str">"GroupInfo.detail"</span>,
  attributeNodes = <span class="ann">@NamedAttributeNode</span>(<span class="str">"members"</span>))
<span class="kw">public class</span> GroupInfo {
  <span class="ann">@ManyToMany</span>              <span class="cm">// default: lazy</span>
  List&lt;GroupMember&gt; members;
}

<span class="cm">// Trong Repository</span>
<span class="ann">@EntityGraph</span>(value = <span class="str">"GroupInfo.detail"</span>, type = EntityGraphType.LOAD)
GroupInfo getByGroupName(String name);
<span class="cm">// → 1 query JOIN FETCH thay vì N+1</span></div>

  <h3>Cách 2 — Ad-hoc EntityGraph (không cần @NamedEntityGraph)</h3>
  <div class="cb"><span class="ann">@EntityGraph</span>(attributePaths = { <span class="str">"members"</span>, <span class="str">"members.profile"</span> })
GroupInfo getByGroupName(String name);
<span class="cm">// Fetch cả members VÀ profile của từng member
// Không cần khai báo @NamedEntityGraph trên Entity</span></div>

  <h3>Ví dụ trực quan N+1 vs EntityGraph</h3>
  <div class="grid2">
    <div class="card coral">
      <div class="card-title">❌ Không dùng EntityGraph — N+1</div>
      <div class="cb" style="font-size:11px">GroupInfo g = repo.getByGroupName("Dev"); <span class="cm">// SELECT group</span>
g.getMembers().size(); <span class="cm">// SELECT members WHERE group_id=1</span>
<span class="cm">// Nếu có 100 group → 101 queries!</span></div>
    </div>
    <div class="card green">
      <div class="card-title">✅ Dùng EntityGraph — 1 query</div>
      <div class="cb" style="font-size:11px"><span class="cm">// SELECT g FROM GroupInfo g JOIN FETCH g.members WHERE g.name='Dev'</span>
GroupInfo g = repo.getByGroupName("Dev");
g.getMembers().size(); <span class="cm">// Không query thêm!</span></div>
    </div>
  </div>
</div>

<!-- S23: Offset Scrolling -->
<div class="section" id="s23">
  <h1>Scrolling using Offset</h1>
  <p>Duyệt dữ liệu lớn theo từng batch (Window) dùng offset — không cần biết tổng số kết quả.</p>

  <h3>Khai báo method với OffsetScrollPosition</h3>
  <div class="cb"><span class="kw">interface</span> UserRepository <span class="kw">extends</span> Repository&lt;User, Long&gt; {
  Window&lt;User&gt; findFirst10ByLastnameOrderByFirstname(String lastname, OffsetScrollPosition position);
}

<span class="cm">// Dùng với WindowIterator (cách đơn giản nhất)</span>
WindowIterator&lt;User&gt; users = WindowIterator.of(
    position -&gt; repo.findFirst10ByLastnameOrderByFirstname(<span class="str">"Doe"</span>, position))
  .startingAt(OffsetScrollPosition.initial()); <span class="cm">// bắt đầu từ đầu</span>

<span class="kw">while</span> (users.hasNext()) {
  User u = users.next(); <span class="cm">// tự động fetch batch tiếp theo khi cần</span>
}</div>

  <h3>Dùng thủ công với Window API</h3>
  <div class="cb">Window&lt;User&gt; users = repo.findFirst10ByLastnameOrderByFirstname(<span class="str">"Doe"</span>, ScrollPosition.offset());
<span class="kw">do</span> {
  users.forEach(u -&gt; process(u));
  <span class="kw">if</span> (users.isLast()) <span class="kw">break</span>;
  <span class="cm">// Lấy ScrollPosition của phần tử cuối để fetch batch tiếp</span>
  users = repo.findFirst10ByLastnameOrderByFirstname(<span class="str">"Doe"</span>, users.positionAt(users.size() - 1));
} <span class="kw">while</span> (!users.isEmpty());</div>

  <div class="warn"><strong>Lưu ý:</strong> <code>ScrollPosition.offset()</code> ≠ <code>ScrollPosition.offset(0L)</code>. Cái đầu = bắt đầu từ đầu. Cái sau = bỏ phần tử tại vị trí 0 (vì scroll là exclusive) → bắt đầu từ phần tử thứ 2.</div>
  <div class="card amber" style="margin-top:.8rem">
    <div class="card-title">Nhược điểm Offset Scrolling</div>
    <p>Database vẫn phải materialize toàn bộ kết quả rồi mới skip offset. Với dataset rất lớn (triệu dòng), dùng Keyset Scrolling hiệu quả hơn.</p>
  </div>
</div>

<!-- S24: Keyset Scrolling -->
<div class="section" id="s24">
  <h1>Scrolling using Keyset-Filtering</h1>
  <p>Thay vì dùng OFFSET, Keyset Scrolling dùng <strong>giá trị của dòng cuối</strong> làm "con trỏ" — database tận dụng index để tìm điểm bắt đầu chính xác.</p>

  <h3>So sánh Offset vs Keyset</h3>
  <table class="t">
    <tr><th></th><th>Offset Scrolling</th><th>Keyset Scrolling</th></tr>
    <tr><td>Cơ chế</td><td>SKIP N dòng đầu</td><td>WHERE key > lastKey</td></tr>
    <tr><td>Database phải làm</td><td>Đọc toàn bộ + skip</td><td>Đọc từ vị trí index</td></tr>
    <tr><td>Tận dụng index</td><td>❌</td><td>✅</td></tr>
    <tr><td>Hiệu năng dataset lớn</td><td>Giảm theo offset</td><td>Ổn định</td></tr>
    <tr><td>Yêu cầu</td><td>Không</td><td>Sort field phải non-null</td></tr>
    <tr><td>Hỗ trợ nhảy trang tùy ý</td><td>✅</td><td>❌ (chỉ scroll tuần tự)</td></tr>
  </table>

  <h3>Khai báo và sử dụng</h3>
  <div class="cb"><span class="kw">interface</span> UserRepository <span class="kw">extends</span> Repository&lt;User, Long&gt; {
  Window&lt;User&gt; findFirst10ByLastnameOrderByFirstname(String lastname, KeysetScrollPosition position);
}

WindowIterator&lt;User&gt; users = WindowIterator.of(
    position -&gt; repo.findFirst10ByLastnameOrderByFirstname(<span class="str">"Doe"</span>, position))
  .startingAt(ScrollPosition.keyset()); <span class="cm">// bắt đầu từ đầu</span>

<span class="kw">while</span> (users.hasNext()) {
  User u = users.next();
}</div>

  <h3>Cách Keyset hoạt động bên dưới</h3>
  <div class="flow" style="flex-direction:column;align-items:flex-start;gap:6px;margin:.8rem 0">
    <div class="flow"><div class="flow-box hl">Lần 1</div><span class="arrow">→</span><div class="flow-box">SELECT ... ORDER BY firstname LIMIT 10</div></div>
    <div class="flow"><div class="flow-box hl">Lần 2</div><span class="arrow">→</span><div class="flow-box">SELECT ... WHERE firstname > 'lastFirstname' ORDER BY firstname LIMIT 10</div></div>
    <div class="flow"><div class="flow-box hl">Lần N</div><span class="arrow">→</span><div class="flow-box">SELECT ... WHERE firstname > 'prevLastname' ORDER BY firstname LIMIT 10</div></div>
  </div>
  <div class="tip">Keyset tự động thêm primary key vào sort order để đảm bảo kết quả unique — không cần tự làm. Ví dụ: sort by firstname → thực ra sort by firstname + id.</div>
  <div class="danger"><strong>Hạn chế Keyset:</strong> Các field sort phải <strong>non-nullable</strong>. Field nullable → so sánh với NULL không ổn định → kết quả sai. Nếu cần sort nullable field, dùng Offset thay thế.</div>
</div>

</div><!-- end content -->
</div><!-- end layout -->

<script>
function go(el, id) {
  document.querySelectorAll('.nav-item').forEach(e => e.classList.remove('active'));
  document.querySelectorAll('.section').forEach(e => e.classList.remove('show'));
  el.classList.add('active');
  document.getElementById(id).classList.add('show');
  document.querySelector('.content').scrollTop = 0;
}
function sw(el, id) {
  const grp = el.closest('div').nextElementSibling;
  let container = el.parentElement.parentElement;
  container.querySelectorAll('.tb').forEach(b => b.classList.remove('on'));
  container.querySelectorAll('.tc').forEach(c => c.classList.remove('on'));
  el.classList.add('on');
  document.getElementById(id).classList.add('on');
}
</script>
</body>
</html>
