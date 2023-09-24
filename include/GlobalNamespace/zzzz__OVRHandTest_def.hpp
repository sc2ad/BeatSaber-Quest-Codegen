#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace UnityEngine::UI {
class Text;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRHandTest____c;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__HandState;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRPlugin__Mesh;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRHandTest__BoolMonitor;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Skeleton;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OVRHandTest__BoolMonitor;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRHandTest____c;
}
namespace GlobalNamespace {
class OVRHandTest;
}
// Type: ::BoolGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8913))
// CS Name: OVRHandTest::BoolMonitor::BoolGenerator
class CORDL_TYPE GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator(GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator(GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator& operator=(GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator&& o) noexcept = default;
  constexpr GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator& operator=(GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2623e44 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2624e9c size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x2624eb0 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2624ed0 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BoolMonitor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8914))
// CS Name: OVRHandTest::BoolMonitor
class CORDL_TYPE GlobalNamespace__OVRHandTest__BoolMonitor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BoolGenerator = GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__OVRHandTest__BoolMonitor() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHandTest__BoolMonitor", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRHandTest__BoolMonitor(GlobalNamespace__OVRHandTest__BoolMonitor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHandTest__BoolMonitor", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRHandTest__BoolMonitor(GlobalNamespace__OVRHandTest__BoolMonitor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRHandTest__BoolMonitor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRHandTest__BoolMonitor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRHandTest__BoolMonitor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRHandTest__BoolMonitor& operator=(GlobalNamespace__OVRHandTest__BoolMonitor&& o) noexcept = default;
  constexpr GlobalNamespace__OVRHandTest__BoolMonitor& operator=(GlobalNamespace__OVRHandTest__BoolMonitor const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_name, put=__set_m_name))  m_name;

constexpr void __set_m_name(::StringW value) ;

constexpr ::StringW __get_m_name() const;

 GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator __declspec(property(get=__get_m_generator, put=__set_m_generator))  m_generator;

constexpr void __set_m_generator(GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator __get_m_generator() const;

 bool __declspec(property(get=__get_m_prevValue, put=__set_m_prevValue))  m_prevValue;

constexpr void __set_m_prevValue(bool value) ;

constexpr bool __get_m_prevValue() const;

 bool __declspec(property(get=__get_m_currentValue, put=__set_m_currentValue))  m_currentValue;

constexpr void __set_m_currentValue(bool value) ;

constexpr bool __get_m_currentValue() const;

 bool __declspec(property(get=__get_m_currentValueRecentlyChanged, put=__set_m_currentValueRecentlyChanged))  m_currentValueRecentlyChanged;

constexpr void __set_m_currentValueRecentlyChanged(bool value) ;

constexpr bool __get_m_currentValueRecentlyChanged() const;

 float_t __declspec(property(get=__get_m_displayTimeout, put=__set_m_displayTimeout))  m_displayTimeout;

constexpr void __set_m_displayTimeout(float_t value) ;

constexpr float_t __get_m_displayTimeout() const;

 float_t __declspec(property(get=__get_m_displayTimer, put=__set_m_displayTimer))  m_displayTimer;

constexpr void __set_m_displayTimer(float_t value) ;

constexpr float_t __get_m_displayTimer() const;


// Methods

static GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor New_ctor(::StringW name, GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator generator, float_t displayTimeout) ;

/// @brief Method .ctor addr 0x2623f00 size 0x78 virtual false final false
 void _ctor(::StringW name, GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator generator, float_t displayTimeout) ;

/// @brief Method Update addr 0x2624b7c size 0x94 virtual false final false
 void Update() ;

/// @brief Method AppendToStringBuilder addr 0x2624c10 size 0xd4 virtual false final false
 void AppendToStringBuilder(ByRef<System::Text::StringBuilder> sb) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8915))
// CS Name: OVRHandTest::<>c
class CORDL_TYPE GlobalNamespace__OVRHandTest____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OVRHandTest____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHandTest____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRHandTest____c(GlobalNamespace__OVRHandTest____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHandTest____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRHandTest____c(GlobalNamespace__OVRHandTest____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRHandTest____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRHandTest____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRHandTest____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRHandTest____c& operator=(GlobalNamespace__OVRHandTest____c&& o) noexcept = default;
  constexpr GlobalNamespace__OVRHandTest____c& operator=(GlobalNamespace__OVRHandTest____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__OVRHandTest____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__OVRHandTest____c value) ;

static GlobalNamespace::GlobalNamespace__OVRHandTest____c __get___9() ;

static GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__14_0, put=__set___9__14_0))  __9__14_0;

static void __set___9__14_0(GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator __get___9__14_0() ;


// Methods

static GlobalNamespace::GlobalNamespace__OVRHandTest____c New_ctor() ;

/// @brief Method .ctor addr 0x2624f5c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__14_0 addr 0x2624f64 size 0x58 virtual false final false
 bool _Start_b__14_0() ;

/// @brief Method <.cctor>b__19_0 addr 0x2624fbc size 0x108 virtual false final false
 bool __cctor_b__19_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRHandTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8916))
// CS Name: OVRHandTest
class CORDL_TYPE OVRHandTest : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__OVRHandTest____c;

using BoolMonitor = GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x178};

virtual ~OVRHandTest() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRHandTest", modifiers: " const&", def_value: None }]
constexpr OVRHandTest(OVRHandTest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRHandTest", modifiers: "&&", def_value: None }]
constexpr OVRHandTest(OVRHandTest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRHandTest(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRHandTest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRHandTest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRHandTest& operator=(OVRHandTest&& o) noexcept = default;
  constexpr OVRHandTest& operator=(OVRHandTest const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Text __declspec(property(get=__get_uiText, put=__set_uiText))  uiText;

constexpr void __set_uiText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_uiText() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor> __declspec(property(get=__get_monitors, put=__set_monitors))  monitors;

constexpr void __set_monitors(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor> __get_monitors() const;

 System::Text::StringBuilder __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_data() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__HandState __declspec(property(get=__get_hs_LH, put=__set_hs_LH))  hs_LH;

constexpr void __set_hs_LH(GlobalNamespace::GlobalNamespace__OVRPlugin__HandState value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__HandState __get_hs_LH() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__HandState __declspec(property(get=__get_hs_RH, put=__set_hs_RH))  hs_RH;

constexpr void __set_hs_RH(GlobalNamespace::GlobalNamespace__OVRPlugin__HandState value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__HandState __get_hs_RH() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__Skeleton __declspec(property(get=__get_skel_LH, put=__set_skel_LH))  skel_LH;

constexpr void __set_skel_LH(GlobalNamespace::GlobalNamespace__OVRPlugin__Skeleton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__Skeleton __get_skel_LH() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__Skeleton __declspec(property(get=__get_skel_RH, put=__set_skel_RH))  skel_RH;

constexpr void __set_skel_RH(GlobalNamespace::GlobalNamespace__OVRPlugin__Skeleton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__Skeleton __get_skel_RH() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__Mesh __declspec(property(get=__get_mesh_LH, put=__set_mesh_LH))  mesh_LH;

constexpr void __set_mesh_LH(GlobalNamespace::GlobalNamespace__OVRPlugin__Mesh value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__Mesh __get_mesh_LH() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__Mesh __declspec(property(get=__get_mesh_RH, put=__set_mesh_RH))  mesh_RH;

constexpr void __set_mesh_RH(GlobalNamespace::GlobalNamespace__OVRPlugin__Mesh value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__Mesh __get_mesh_RH() const;

 bool __declspec(property(get=__get_result_skel_LH, put=__set_result_skel_LH))  result_skel_LH;

constexpr void __set_result_skel_LH(bool value) ;

constexpr bool __get_result_skel_LH() const;

 bool __declspec(property(get=__get_result_skel_RH, put=__set_result_skel_RH))  result_skel_RH;

constexpr void __set_result_skel_RH(bool value) ;

constexpr bool __get_result_skel_RH() const;

 bool __declspec(property(get=__get_result_mesh_LH, put=__set_result_mesh_LH))  result_mesh_LH;

constexpr void __set_result_mesh_LH(bool value) ;

constexpr bool __get_result_mesh_LH() const;

 bool __declspec(property(get=__get_result_mesh_RH, put=__set_result_mesh_RH))  result_mesh_RH;

constexpr void __set_result_mesh_RH(bool value) ;

constexpr bool __get_result_mesh_RH() const;

static ::StringW __declspec(property(get=__get_prevConnected, put=__set_prevConnected))  prevConnected;

static void __set_prevConnected(::StringW value) ;

static ::StringW __get_prevConnected() ;

static GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor __declspec(property(get=__get_controllers, put=__set_controllers))  controllers;

static void __set_controllers(GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor value) ;

static GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor __get_controllers() ;


// Methods

/// @brief Method Start addr 0x2623b60 size 0x2e4 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x2623f78 size 0xc04 virtual false final false
 void Update() ;

static GlobalNamespace::OVRHandTest New_ctor() ;

/// @brief Method .ctor addr 0x2624ce4 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor, "", "OVRHandTest/BoolMonitor");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRHandTest__BoolMonitor__BoolGenerator, "", "OVRHandTest/BoolMonitor/BoolGenerator");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRHandTest____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRHandTest____c, "", "OVRHandTest/<>c");
NEED_NO_BOX(GlobalNamespace::OVRHandTest);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHandTest, "", "OVRHandTest");
