#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine {
class HelpURLAttribute;
}
// Type: UnityEngine::HelpURLAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10162))
// CS Name: UnityEngine.HelpURLAttribute
class CORDL_TYPE HelpURLAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HelpURLAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "HelpURLAttribute", modifiers: " const&", def_value: None }]
constexpr HelpURLAttribute(HelpURLAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HelpURLAttribute", modifiers: "&&", def_value: None }]
constexpr HelpURLAttribute(HelpURLAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HelpURLAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr HelpURLAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HelpURLAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HelpURLAttribute& operator=(HelpURLAttribute&& o) noexcept = default;
  constexpr HelpURLAttribute& operator=(HelpURLAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Url, put=__set_m_Url))  m_Url;

constexpr void __set_m_Url(::StringW value) ;

constexpr ::StringW __get_m_Url() const;

 bool __declspec(property(get=__get_m_Dispatcher, put=__set_m_Dispatcher))  m_Dispatcher;

constexpr void __set_m_Dispatcher(bool value) ;

constexpr bool __get_m_Dispatcher() const;

 ::StringW __declspec(property(get=__get_m_DispatchingFieldName, put=__set_m_DispatchingFieldName))  m_DispatchingFieldName;

constexpr void __set_m_DispatchingFieldName(::StringW value) ;

constexpr ::StringW __get_m_DispatchingFieldName() const;


// Methods

static UnityEngine::HelpURLAttribute New_ctor(::StringW url) ;

/// @brief Method .ctor addr 0x2b5b370 size 0x68 virtual false final false
 void _ctor(::StringW url) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::HelpURLAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HelpURLAttribute, "UnityEngine", "HelpURLAttribute");
