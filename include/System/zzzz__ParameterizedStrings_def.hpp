#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
class ParameterizedStrings;
}
namespace System {
class System__ParameterizedStrings__LowLevelStack;
}
namespace System {
struct System__ParameterizedStrings__FormatParam;
}
// Type: ::FormatParam
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2619))
// CS Name: System.ParameterizedStrings::FormatParam
struct CORDL_TYPE System__ParameterizedStrings__FormatParam : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_int32", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_string", ty: "::StringW", modifiers: "", def_value: None }]
constexpr System__ParameterizedStrings__FormatParam(int32_t _int32, ::StringW _string) noexcept;


                    constexpr System__ParameterizedStrings__FormatParam(System__ParameterizedStrings__FormatParam const&) = default;
                    constexpr System__ParameterizedStrings__FormatParam(System__ParameterizedStrings__FormatParam&&) = default;
                    constexpr System__ParameterizedStrings__FormatParam& operator=(System__ParameterizedStrings__FormatParam const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__ParameterizedStrings__FormatParam& operator=(System__ParameterizedStrings__FormatParam&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__ParameterizedStrings__FormatParam(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get__int32, put=__set__int32))  _int32;

constexpr void __set__int32(int32_t value) ;

constexpr int32_t __get__int32() const;

 ::StringW __declspec(property(get=__get__string, put=__set__string))  _string;

constexpr void __set__string(::StringW value) ;

constexpr ::StringW __get__string() const;


// Properties

 int32_t __declspec(property(get=get_Int32))  Int32;

 ::StringW __declspec(property(get=get_String))  String;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Object))  Object;


// Methods

/// @brief Method .ctor addr 0x2497f80 size 0xc virtual false final false
 void _ctor(int32_t value) ;

/// @brief Method .ctor addr 0x2497f8c size 0xc virtual false final false
 void _ctor(int32_t intValue, ::StringW stringValue) ;

/// @brief Method op_Implicit addr 0x2494a48 size 0xc virtual false final false
static System::System__ParameterizedStrings__FormatParam op_Implicit_System__System__ParameterizedStrings__FormatParam(int32_t value) ;

/// @brief Method get_Int32 addr 0x2497f98 size 0x8 virtual false final false
 int32_t get_Int32() ;

/// @brief Method get_String addr 0x249780c size 0x54 virtual false final false
 ::StringW get_String() ;

/// @brief Method get_Object addr 0x2497860 size 0x5c virtual false final false
 ::bs_hook::Il2CppWrapperType get_Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::LowLevelStack
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2620))
// CS Name: System.ParameterizedStrings::LowLevelStack
class CORDL_TYPE System__ParameterizedStrings__LowLevelStack : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__ParameterizedStrings__LowLevelStack() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ParameterizedStrings__LowLevelStack", modifiers: " const&", def_value: None }]
constexpr System__ParameterizedStrings__LowLevelStack(System__ParameterizedStrings__LowLevelStack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ParameterizedStrings__LowLevelStack", modifiers: "&&", def_value: None }]
constexpr System__ParameterizedStrings__LowLevelStack(System__ParameterizedStrings__LowLevelStack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ParameterizedStrings__LowLevelStack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__ParameterizedStrings__LowLevelStack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ParameterizedStrings__LowLevelStack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ParameterizedStrings__LowLevelStack& operator=(System__ParameterizedStrings__LowLevelStack&& o) noexcept = default;
  constexpr System__ParameterizedStrings__LowLevelStack& operator=(System__ParameterizedStrings__LowLevelStack const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::System__ParameterizedStrings__FormatParam> __declspec(property(get=__get__arr, put=__set__arr))  _arr;

constexpr void __set__arr(::ArrayW<System::System__ParameterizedStrings__FormatParam> value) ;

constexpr ::ArrayW<System::System__ParameterizedStrings__FormatParam> __get__arr() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;


// Methods

// Ctor Parameters []
explicit System__ParameterizedStrings__LowLevelStack() ;

/// @brief Method .ctor addr 0x2496ea4 size 0x50 virtual false final false
 void _ctor() ;

/// @brief Method Pop addr 0x2497778 size 0x94 virtual false final false
 System::System__ParameterizedStrings__FormatParam Pop() ;

/// @brief Method Push addr 0x2497b10 size 0xd8 virtual false final false
 void Push(System::System__ParameterizedStrings__FormatParam item) ;

/// @brief Method Clear addr 0x2496ef4 size 0x28 virtual false final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::ParameterizedStrings
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2621))
// CS Name: System.ParameterizedStrings
class CORDL_TYPE ParameterizedStrings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LowLevelStack = System::System__ParameterizedStrings__LowLevelStack;

using FormatParam = System::System__ParameterizedStrings__FormatParam;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ParameterizedStrings() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings", modifiers: " const&", def_value: None }]
constexpr ParameterizedStrings(ParameterizedStrings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParameterizedStrings", modifiers: "&&", def_value: None }]
constexpr ParameterizedStrings(ParameterizedStrings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParameterizedStrings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ParameterizedStrings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParameterizedStrings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParameterizedStrings& operator=(ParameterizedStrings&& o) noexcept = default;
  constexpr ParameterizedStrings& operator=(ParameterizedStrings const& o) noexcept = default;
                


// Fields

static System::System__ParameterizedStrings__LowLevelStack __declspec(property(get=__get__cachedStack, put=__set__cachedStack))  _cachedStack;

static void __set__cachedStack(System::System__ParameterizedStrings__LowLevelStack value) ;

static System::System__ParameterizedStrings__LowLevelStack __get__cachedStack() ;


// Methods

/// @brief Method Evaluate addr 0x2494a54 size 0x16c virtual false final false
static ::StringW Evaluate(::StringW format, ::ArrayW<System::System__ParameterizedStrings__FormatParam> args) ;

/// @brief Method EvaluateInternal addr 0x2496f1c size 0x85c virtual false final false
static ::StringW EvaluateInternal(::StringW format, ByRef<int32_t> pos, ::ArrayW<System::System__ParameterizedStrings__FormatParam> args, System::System__ParameterizedStrings__LowLevelStack stack, ByRef<::ArrayW<System::System__ParameterizedStrings__FormatParam>> dynamicVars, ByRef<::ArrayW<System::System__ParameterizedStrings__FormatParam>> staticVars) ;

/// @brief Method AsBool addr 0x2497cf8 size 0xc virtual false final false
static bool AsBool(int32_t i) ;

/// @brief Method AsInt addr 0x2497cf0 size 0x8 virtual false final false
static int32_t AsInt(bool b) ;

/// @brief Method StringFromAsciiBytes addr 0x2497d04 size 0xf8 virtual false final false
static ::StringW StringFromAsciiBytes(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) ;

/// @brief Method snprintf addr 0x2497dfc size 0xcc virtual false final false
static int32_t snprintf(void* str, ::cordl_internals::intptr_t size, ::StringW format, ::StringW arg1) ;

/// @brief Method snprintf addr 0x2497ec8 size 0xb8 virtual false final false
static int32_t snprintf(void* str, ::cordl_internals::intptr_t size, ::StringW format, int32_t arg1) ;

/// @brief Method FormatPrintF addr 0x24978bc size 0x254 virtual false final false
static ::StringW FormatPrintF(::StringW format, ::bs_hook::Il2CppWrapperType arg) ;

/// @brief Method GetDynamicOrStaticVariables addr 0x2497be8 size 0x108 virtual false final false
static ::ArrayW<System::System__ParameterizedStrings__FormatParam> GetDynamicOrStaticVariables(char16_t c, ByRef<::ArrayW<System::System__ParameterizedStrings__FormatParam>> dynamicVars, ByRef<::ArrayW<System::System__ParameterizedStrings__FormatParam>> staticVars, ByRef<int32_t> index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ParameterizedStrings);
DEFINE_IL2CPP_ARG_TYPE(System::ParameterizedStrings, "System", "ParameterizedStrings");
NEED_NO_BOX(System::System__ParameterizedStrings__LowLevelStack);
DEFINE_IL2CPP_ARG_TYPE(System::System__ParameterizedStrings__LowLevelStack, "System", "ParameterizedStrings/LowLevelStack");
DEFINE_IL2CPP_ARG_TYPE(System::System__ParameterizedStrings__FormatParam, "System", "ParameterizedStrings/FormatParam");
