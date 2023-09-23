#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyValueMatcher;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
namespace UnityEngine::UIElements {
class StyleProperty;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class StyleSyntaxParser;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__StyleVariableResolver__Result;
}
namespace UnityEngine::UIElements {
class StyleVariableResolver;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__StyleVariableResolver__ResolveContext;
}
// Type: ::Result
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7366))
// CS Name: UnityEngine.UIElements.StyleVariableResolver::Result
struct CORDL_TYPE UnityEngine__UIElements__StyleVariableResolver__Result : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StyleVariableResolver__Result(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__StyleVariableResolver__Result(UnityEngine__UIElements__StyleVariableResolver__Result const&) = default;
                    constexpr UnityEngine__UIElements__StyleVariableResolver__Result(UnityEngine__UIElements__StyleVariableResolver__Result&&) = default;
                    constexpr UnityEngine__UIElements__StyleVariableResolver__Result& operator=(UnityEngine__UIElements__StyleVariableResolver__Result const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StyleVariableResolver__Result& operator=(UnityEngine__UIElements__StyleVariableResolver__Result&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StyleVariableResolver__Result(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__StyleVariableResolver__Result_Unwrapped : int32_t {
__Valid = 0,
__Invalid = 1,
__NotFound = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__StyleVariableResolver__Result_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__StyleVariableResolver__Result_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Valid offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__Result const Valid;

/// @brief Field Invalid offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__Result const Invalid;

/// @brief Field NotFound offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__Result const NotFound;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::ResolveContext
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7367))
// CS Name: UnityEngine.UIElements.StyleVariableResolver::ResolveContext
struct CORDL_TYPE UnityEngine__UIElements__StyleVariableResolver__ResolveContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sheet", ty: "UnityEngine::UIElements::StyleSheet", modifiers: "", def_value: None }, CppParam { name: "handles", ty: "::ArrayW<UnityEngine::UIElements::StyleValueHandle>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__StyleVariableResolver__ResolveContext(UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<UnityEngine::UIElements::StyleValueHandle> handles) noexcept;


                    constexpr UnityEngine__UIElements__StyleVariableResolver__ResolveContext(UnityEngine__UIElements__StyleVariableResolver__ResolveContext const&) = default;
                    constexpr UnityEngine__UIElements__StyleVariableResolver__ResolveContext(UnityEngine__UIElements__StyleVariableResolver__ResolveContext&&) = default;
                    constexpr UnityEngine__UIElements__StyleVariableResolver__ResolveContext& operator=(UnityEngine__UIElements__StyleVariableResolver__ResolveContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__StyleVariableResolver__ResolveContext& operator=(UnityEngine__UIElements__StyleVariableResolver__ResolveContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StyleVariableResolver__ResolveContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::StyleSheet __declspec(property(get=__get_sheet, put=__set_sheet))  sheet;

constexpr void __set_sheet(UnityEngine::UIElements::StyleSheet value) ;

constexpr UnityEngine::UIElements::StyleSheet __get_sheet() const;

 ::ArrayW<UnityEngine::UIElements::StyleValueHandle> __declspec(property(get=__get_handles, put=__set_handles))  handles;

constexpr void __set_handles(::ArrayW<UnityEngine::UIElements::StyleValueHandle> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleValueHandle> __get_handles() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleVariableResolver
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7368))
// CS Name: UnityEngine.UIElements.StyleVariableResolver
class CORDL_TYPE StyleVariableResolver : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ResolveContext = UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext;

using Result = UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__Result;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~StyleVariableResolver() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleVariableResolver", modifiers: " const&", def_value: None }]
constexpr StyleVariableResolver(StyleVariableResolver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleVariableResolver", modifiers: "&&", def_value: None }]
constexpr StyleVariableResolver(StyleVariableResolver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleVariableResolver(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleVariableResolver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleVariableResolver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleVariableResolver& operator=(StyleVariableResolver&& o) noexcept = default;
  constexpr StyleVariableResolver& operator=(StyleVariableResolver const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxResolves offset 0
static constexpr int32_t  kMaxResolves{100};

static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser __declspec(property(get=__get_s_SyntaxParser, put=__set_s_SyntaxParser))  s_SyntaxParser;

static void __set_s_SyntaxParser(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser value) ;

static UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser __get_s_SyntaxParser() ;

 UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher __declspec(property(get=__get_m_Matcher, put=__set_m_Matcher))  m_Matcher;

constexpr void __set_m_Matcher(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher value) ;

constexpr UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher __get_m_Matcher() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyValue> __declspec(property(get=__get_m_ResolvedValues, put=__set_m_ResolvedValues))  m_ResolvedValues;

constexpr void __set_m_ResolvedValues(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyValue> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyValue> __get_m_ResolvedValues() const;

 System::Collections::Generic::Stack_1<::StringW> __declspec(property(get=__get_m_ResolvedVarStack, put=__set_m_ResolvedVarStack))  m_ResolvedVarStack;

constexpr void __set_m_ResolvedVarStack(System::Collections::Generic::Stack_1<::StringW> value) ;

constexpr System::Collections::Generic::Stack_1<::StringW> __get_m_ResolvedVarStack() const;

 UnityEngine::UIElements::StyleProperty __declspec(property(get=__get_m_Property, put=__set_m_Property))  m_Property;

constexpr void __set_m_Property(UnityEngine::UIElements::StyleProperty value) ;

constexpr UnityEngine::UIElements::StyleProperty __get_m_Property() const;

 System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> __declspec(property(get=__get_m_ContextStack, put=__set_m_ContextStack))  m_ContextStack;

constexpr void __set_m_ContextStack(System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext> __get_m_ContextStack() const;

 UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext __declspec(property(get=__get_m_CurrentContext, put=__set_m_CurrentContext))  m_CurrentContext;

constexpr void __set_m_CurrentContext(UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext __get_m_CurrentContext() const;

 UnityEngine::UIElements::StyleVariableContext __declspec(property(get=__get__variableContext_k__BackingField, put=__set__variableContext_k__BackingField))  _variableContext_k__BackingField;

constexpr void __set__variableContext_k__BackingField(UnityEngine::UIElements::StyleVariableContext value) ;

constexpr UnityEngine::UIElements::StyleVariableContext __get__variableContext_k__BackingField() const;


// Properties

 UnityEngine::UIElements::StyleSheet __declspec(property(get=get_currentSheet))  currentSheet;

 ::ArrayW<UnityEngine::UIElements::StyleValueHandle> __declspec(property(get=get_currentHandles))  currentHandles;

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyValue> __declspec(property(get=get_resolvedValues))  resolvedValues;

 UnityEngine::UIElements::StyleVariableContext __declspec(property(get=get_variableContext, put=set_variableContext))  variableContext;


// Methods

/// @brief Method get_currentSheet addr 0x2cf2cec size 0x8 virtual false final false
 UnityEngine::UIElements::StyleSheet get_currentSheet() ;

/// @brief Method get_currentHandles addr 0x2cf2cf4 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::UIElements::StyleValueHandle> get_currentHandles() ;

/// @brief Method get_resolvedValues addr 0x2cf2cfc size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyValue> get_resolvedValues() ;

/// @brief Method get_variableContext addr 0x2cf2d04 size 0x8 virtual false final false
 UnityEngine::UIElements::StyleVariableContext get_variableContext() ;

/// @brief Method set_variableContext addr 0x2cf2d0c size 0x8 virtual false final false
 void set_variableContext(UnityEngine::UIElements::StyleVariableContext value) ;

/// @brief Method Init addr 0x2cf2d14 size 0xb0 virtual false final false
 void Init(UnityEngine::UIElements::StyleProperty property, UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<UnityEngine::UIElements::StyleValueHandle> handles) ;

/// @brief Method PushContext addr 0x2cf2dc4 size 0x6c virtual false final false
 void PushContext(UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<UnityEngine::UIElements::StyleValueHandle> handles) ;

/// @brief Method PopContext addr 0x2cf2e30 size 0x7c virtual false final false
 void PopContext() ;

/// @brief Method AddValue addr 0x2cf2eac size 0xac virtual false final false
 void AddValue(UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method ResolveVarFunction addr 0x2cf2f58 size 0xcc virtual false final false
 bool ResolveVarFunction(ByRef<int32_t> index) ;

/// @brief Method ResolveVarFunction addr 0x2cf30d4 size 0x15c virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__Result ResolveVarFunction(ByRef<int32_t> index, int32_t argc, ::StringW varName) ;

/// @brief Method ValidateResolvedValues addr 0x2cf3734 size 0x170 virtual false final false
 bool ValidateResolvedValues() ;

/// @brief Method ResolveVariable addr 0x2cf3230 size 0x278 virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__Result ResolveVariable(::StringW variableName) ;

/// @brief Method ResolveFallback addr 0x2cf34b0 size 0x284 virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__Result ResolveFallback(ByRef<int32_t> index) ;

/// @brief Method ParseVarFunction addr 0x2cf3024 size 0xb0 virtual false final false
static void ParseVarFunction(UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<UnityEngine::UIElements::StyleValueHandle> handles, ByRef<int32_t> index, ByRef<int32_t> argCount, ByRef<::StringW> variableName) ;

// Ctor Parameters []
explicit StyleVariableResolver() ;

/// @brief Method .ctor addr 0x2cf39fc size 0x134 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__Result, "UnityEngine.UIElements", "StyleVariableResolver/Result");
NEED_NO_BOX(UnityEngine::UIElements::StyleVariableResolver);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleVariableResolver, "UnityEngine.UIElements", "StyleVariableResolver");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__StyleVariableResolver__ResolveContext, "UnityEngine.UIElements", "StyleVariableResolver/ResolveContext");
