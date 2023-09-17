#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct StyleVariable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
// Type: UnityEngine.UIElements::StyleVariableContext
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7365))
// CS Name: UnityEngine.UIElements.StyleVariableContext
class CORDL_TYPE StyleVariableContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StyleVariableContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleVariableContext", modifiers: " const&", def_value: None }]
constexpr StyleVariableContext(StyleVariableContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleVariableContext", modifiers: "&&", def_value: None }]
constexpr StyleVariableContext(StyleVariableContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleVariableContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleVariableContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleVariableContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleVariableContext& operator=(StyleVariableContext&& o) noexcept = default;
  constexpr StyleVariableContext& operator=(StyleVariableContext const& o) noexcept = default;
                


// Fields

static ::UnityEngine::UIElements::StyleVariableContext __declspec(property(get=__get_none, put=__set_none))  none;

static void __set_none(::UnityEngine::UIElements::StyleVariableContext value) ;

static ::UnityEngine::UIElements::StyleVariableContext __get_none() ;

 int32_t __declspec(property(get=__get_m_VariableHash, put=__set_m_VariableHash))  m_VariableHash;

constexpr void __set_m_VariableHash(int32_t value) ;

constexpr int32_t __get_m_VariableHash() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable> __declspec(property(get=__get_m_Variables, put=__set_m_Variables))  m_Variables;

constexpr void __set_m_Variables(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable> __get_m_Variables() const;

 ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_m_SortedHash, put=__set_m_SortedHash))  m_SortedHash;

constexpr void __set_m_SortedHash(::System::Collections::Generic::List_1<int32_t> value) ;

constexpr ::System::Collections::Generic::List_1<int32_t> __get_m_SortedHash() const;


// Methods

/// @brief Method Add addr 0x2cf26b0 size 0x1a0 virtual false final false
 void Add(::UnityEngine::UIElements::StyleVariable sv) ;

/// @brief Method AddInitialRange addr 0x2cf2850 size 0xf8 virtual false final false
 void AddInitialRange(::UnityEngine::UIElements::StyleVariableContext other) ;

/// @brief Method Clear addr 0x2cf2948 size 0x9c virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit StyleVariableContext() ;

/// @brief Method .ctor addr 0x2cf29e4 size 0xc8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "other", ty: "::UnityEngine::UIElements::StyleVariableContext", modifiers: "", def_value: None }]
explicit StyleVariableContext(::UnityEngine::UIElements::StyleVariableContext other) ;

/// @brief Method .ctor addr 0x2cf2aac size 0xec virtual false final false
 void _ctor(::UnityEngine::UIElements::StyleVariableContext other) ;

/// @brief Method TryFindVariable addr 0x2cf2b98 size 0xec virtual false final false
 bool TryFindVariable(::StringW name, ByRef<::UnityEngine::UIElements::StyleVariable> v) ;

/// @brief Method GetVariableHash addr 0x2cf2c84 size 0x8 virtual false final false
 int32_t GetVariableHash() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::StyleVariableContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariableContext, "UnityEngine.UIElements", "StyleVariableContext");
