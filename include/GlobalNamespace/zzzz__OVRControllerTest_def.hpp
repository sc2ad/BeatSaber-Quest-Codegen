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
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace UnityEngine::UI {
class Text;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OVRControllerTest__BoolMonitor;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRControllerTest____c;
}
namespace GlobalNamespace {
class OVRControllerTest;
}
// Type: ::BoolGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8882))
// CS Name: OVRControllerTest::BoolMonitor::BoolGenerator
class CORDL_TYPE GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator(GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator(GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator& operator=(GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator&& o) noexcept = default;
  constexpr GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator& operator=(GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x261c2ec size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x261cf84 size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x261cf98 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x261cfb8 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BoolMonitor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8883))
// CS Name: OVRControllerTest::BoolMonitor
class CORDL_TYPE GlobalNamespace__OVRControllerTest__BoolMonitor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BoolGenerator = GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__OVRControllerTest__BoolMonitor() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRControllerTest__BoolMonitor", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRControllerTest__BoolMonitor(GlobalNamespace__OVRControllerTest__BoolMonitor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRControllerTest__BoolMonitor", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRControllerTest__BoolMonitor(GlobalNamespace__OVRControllerTest__BoolMonitor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRControllerTest__BoolMonitor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRControllerTest__BoolMonitor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRControllerTest__BoolMonitor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRControllerTest__BoolMonitor& operator=(GlobalNamespace__OVRControllerTest__BoolMonitor&& o) noexcept = default;
  constexpr GlobalNamespace__OVRControllerTest__BoolMonitor& operator=(GlobalNamespace__OVRControllerTest__BoolMonitor const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_name, put=__set_m_name))  m_name;

constexpr void __set_m_name(::StringW value) ;

constexpr ::StringW __get_m_name() const;

 GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get_m_generator, put=__set_m_generator))  m_generator;

constexpr void __set_m_generator(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get_m_generator() const;

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

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "generator", ty: "GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator", modifiers: "", def_value: None }, CppParam { name: "displayTimeout", ty: "float_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRControllerTest__BoolMonitor(::StringW name, GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator generator, float_t displayTimeout) ;

/// @brief Method .ctor addr 0x261c3a8 size 0x78 virtual false final false
 void _ctor(::StringW name, GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator generator, float_t displayTimeout) ;

/// @brief Method Update addr 0x261cce0 size 0x94 virtual false final false
 void Update() ;

/// @brief Method AppendToStringBuilder addr 0x261cd74 size 0xd4 virtual false final false
 void AppendToStringBuilder(ByRef<System::Text::StringBuilder> sb) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8884))
// CS Name: OVRControllerTest::<>c
class CORDL_TYPE GlobalNamespace__OVRControllerTest____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OVRControllerTest____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRControllerTest____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRControllerTest____c(GlobalNamespace__OVRControllerTest____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRControllerTest____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRControllerTest____c(GlobalNamespace__OVRControllerTest____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRControllerTest____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRControllerTest____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRControllerTest____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRControllerTest____c& operator=(GlobalNamespace__OVRControllerTest____c&& o) noexcept = default;
  constexpr GlobalNamespace__OVRControllerTest____c& operator=(GlobalNamespace__OVRControllerTest____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__OVRControllerTest____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__OVRControllerTest____c value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest____c __get___9() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_0() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_1, put=__set___9__4_1))  __9__4_1;

static void __set___9__4_1(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_1() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_2, put=__set___9__4_2))  __9__4_2;

static void __set___9__4_2(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_2() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_3, put=__set___9__4_3))  __9__4_3;

static void __set___9__4_3(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_3() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_4, put=__set___9__4_4))  __9__4_4;

static void __set___9__4_4(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_4() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_5, put=__set___9__4_5))  __9__4_5;

static void __set___9__4_5(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_5() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_6, put=__set___9__4_6))  __9__4_6;

static void __set___9__4_6(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_6() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_7, put=__set___9__4_7))  __9__4_7;

static void __set___9__4_7(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_7() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_8, put=__set___9__4_8))  __9__4_8;

static void __set___9__4_8(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_8() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_9, put=__set___9__4_9))  __9__4_9;

static void __set___9__4_9(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_9() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_10, put=__set___9__4_10))  __9__4_10;

static void __set___9__4_10(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_10() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_11, put=__set___9__4_11))  __9__4_11;

static void __set___9__4_11(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_11() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_12, put=__set___9__4_12))  __9__4_12;

static void __set___9__4_12(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_12() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_13, put=__set___9__4_13))  __9__4_13;

static void __set___9__4_13(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_13() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_14, put=__set___9__4_14))  __9__4_14;

static void __set___9__4_14(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_14() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_15, put=__set___9__4_15))  __9__4_15;

static void __set___9__4_15(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_15() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_16, put=__set___9__4_16))  __9__4_16;

static void __set___9__4_16(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_16() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_17, put=__set___9__4_17))  __9__4_17;

static void __set___9__4_17(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_17() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_18, put=__set___9__4_18))  __9__4_18;

static void __set___9__4_18(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_18() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_19, put=__set___9__4_19))  __9__4_19;

static void __set___9__4_19(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_19() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_20, put=__set___9__4_20))  __9__4_20;

static void __set___9__4_20(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_20() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_21, put=__set___9__4_21))  __9__4_21;

static void __set___9__4_21(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_21() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_22, put=__set___9__4_22))  __9__4_22;

static void __set___9__4_22(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_22() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_23, put=__set___9__4_23))  __9__4_23;

static void __set___9__4_23(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_23() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_24, put=__set___9__4_24))  __9__4_24;

static void __set___9__4_24(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_24() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_25, put=__set___9__4_25))  __9__4_25;

static void __set___9__4_25(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_25() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_26, put=__set___9__4_26))  __9__4_26;

static void __set___9__4_26(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_26() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_27, put=__set___9__4_27))  __9__4_27;

static void __set___9__4_27(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_27() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_28, put=__set___9__4_28))  __9__4_28;

static void __set___9__4_28(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_28() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_29, put=__set___9__4_29))  __9__4_29;

static void __set___9__4_29(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_29() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __declspec(property(get=__get___9__4_30, put=__set___9__4_30))  __9__4_30;

static void __set___9__4_30(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator __get___9__4_30() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRControllerTest____c() ;

/// @brief Method .ctor addr 0x261d044 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__4_0 addr 0x261d04c size 0x58 virtual false final false
 bool _Start_b__4_0() ;

/// @brief Method <Start>b__4_1 addr 0x261d0a4 size 0x58 virtual false final false
 bool _Start_b__4_1() ;

/// @brief Method <Start>b__4_2 addr 0x261d0fc size 0x58 virtual false final false
 bool _Start_b__4_2() ;

/// @brief Method <Start>b__4_3 addr 0x261d154 size 0x58 virtual false final false
 bool _Start_b__4_3() ;

/// @brief Method <Start>b__4_4 addr 0x261d1ac size 0x58 virtual false final false
 bool _Start_b__4_4() ;

/// @brief Method <Start>b__4_5 addr 0x261d204 size 0x58 virtual false final false
 bool _Start_b__4_5() ;

/// @brief Method <Start>b__4_6 addr 0x261d25c size 0x58 virtual false final false
 bool _Start_b__4_6() ;

/// @brief Method <Start>b__4_7 addr 0x261d2b4 size 0x58 virtual false final false
 bool _Start_b__4_7() ;

/// @brief Method <Start>b__4_8 addr 0x261d30c size 0x58 virtual false final false
 bool _Start_b__4_8() ;

/// @brief Method <Start>b__4_9 addr 0x261d364 size 0x58 virtual false final false
 bool _Start_b__4_9() ;

/// @brief Method <Start>b__4_10 addr 0x261d3bc size 0x58 virtual false final false
 bool _Start_b__4_10() ;

/// @brief Method <Start>b__4_11 addr 0x261d414 size 0x58 virtual false final false
 bool _Start_b__4_11() ;

/// @brief Method <Start>b__4_12 addr 0x261d46c size 0x58 virtual false final false
 bool _Start_b__4_12() ;

/// @brief Method <Start>b__4_13 addr 0x261d4c4 size 0x58 virtual false final false
 bool _Start_b__4_13() ;

/// @brief Method <Start>b__4_14 addr 0x261d51c size 0x58 virtual false final false
 bool _Start_b__4_14() ;

/// @brief Method <Start>b__4_15 addr 0x261d574 size 0x58 virtual false final false
 bool _Start_b__4_15() ;

/// @brief Method <Start>b__4_16 addr 0x261d5cc size 0x58 virtual false final false
 bool _Start_b__4_16() ;

/// @brief Method <Start>b__4_17 addr 0x261d624 size 0x58 virtual false final false
 bool _Start_b__4_17() ;

/// @brief Method <Start>b__4_18 addr 0x261d67c size 0x58 virtual false final false
 bool _Start_b__4_18() ;

/// @brief Method <Start>b__4_19 addr 0x261d6d4 size 0x58 virtual false final false
 bool _Start_b__4_19() ;

/// @brief Method <Start>b__4_20 addr 0x261d72c size 0x58 virtual false final false
 bool _Start_b__4_20() ;

/// @brief Method <Start>b__4_21 addr 0x261d784 size 0x58 virtual false final false
 bool _Start_b__4_21() ;

/// @brief Method <Start>b__4_22 addr 0x261d7dc size 0x58 virtual false final false
 bool _Start_b__4_22() ;

/// @brief Method <Start>b__4_23 addr 0x261d834 size 0x58 virtual false final false
 bool _Start_b__4_23() ;

/// @brief Method <Start>b__4_24 addr 0x261d88c size 0x58 virtual false final false
 bool _Start_b__4_24() ;

/// @brief Method <Start>b__4_25 addr 0x261d8e4 size 0x58 virtual false final false
 bool _Start_b__4_25() ;

/// @brief Method <Start>b__4_26 addr 0x261d93c size 0x58 virtual false final false
 bool _Start_b__4_26() ;

/// @brief Method <Start>b__4_27 addr 0x261d994 size 0x58 virtual false final false
 bool _Start_b__4_27() ;

/// @brief Method <Start>b__4_28 addr 0x261d9ec size 0x58 virtual false final false
 bool _Start_b__4_28() ;

/// @brief Method <Start>b__4_29 addr 0x261da44 size 0x58 virtual false final false
 bool _Start_b__4_29() ;

/// @brief Method <Start>b__4_30 addr 0x261da9c size 0x58 virtual false final false
 bool _Start_b__4_30() ;

/// @brief Method <.cctor>b__9_0 addr 0x261daf4 size 0x108 virtual false final false
 bool __cctor_b__9_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRControllerTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8885))
// CS Name: OVRControllerTest
class CORDL_TYPE OVRControllerTest : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__OVRControllerTest____c;

using BoolMonitor = GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OVRControllerTest() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerTest", modifiers: " const&", def_value: None }]
constexpr OVRControllerTest(OVRControllerTest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerTest", modifiers: "&&", def_value: None }]
constexpr OVRControllerTest(OVRControllerTest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRControllerTest(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRControllerTest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRControllerTest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRControllerTest& operator=(OVRControllerTest&& o) noexcept = default;
  constexpr OVRControllerTest& operator=(OVRControllerTest const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Text __declspec(property(get=__get_uiText, put=__set_uiText))  uiText;

constexpr void __set_uiText(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_uiText() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor> __declspec(property(get=__get_monitors, put=__set_monitors))  monitors;

constexpr void __set_monitors(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor> __get_monitors() const;

 System::Text::StringBuilder __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_data() const;

static ::StringW __declspec(property(get=__get_prevConnected, put=__set_prevConnected))  prevConnected;

static void __set_prevConnected(::StringW value) ;

static ::StringW __get_prevConnected() ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor __declspec(property(get=__get_controllers, put=__set_controllers))  controllers;

static void __set_controllers(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor value) ;

static GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor __get_controllers() ;


// Methods

/// @brief Method Start addr 0x261a1ec size 0x2100 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x261c420 size 0x8c0 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit OVRControllerTest() ;

/// @brief Method .ctor addr 0x261ce48 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor, "", "OVRControllerTest/BoolMonitor");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRControllerTest__BoolMonitor__BoolGenerator, "", "OVRControllerTest/BoolMonitor/BoolGenerator");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRControllerTest____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRControllerTest____c, "", "OVRControllerTest/<>c");
NEED_NO_BOX(GlobalNamespace::OVRControllerTest);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRControllerTest, "", "OVRControllerTest");
