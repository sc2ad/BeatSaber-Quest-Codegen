#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeRestriction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class UxmlTypeRestriction;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlEnumeration;
}
// Type: UnityEngine.UIElements::UxmlEnumeration
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7069))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7070))
// CS Name: UnityEngine.UIElements.UxmlEnumeration
class CORDL_TYPE UxmlEnumeration : public UnityEngine::UIElements::UxmlTypeRestriction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UxmlEnumeration() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlEnumeration", modifiers: " const&", def_value: None }]
constexpr UxmlEnumeration(UxmlEnumeration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlEnumeration", modifiers: "&&", def_value: None }]
constexpr UxmlEnumeration(UxmlEnumeration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlEnumeration(void* ptr) noexcept : UnityEngine::UIElements::UxmlTypeRestriction(ptr) {
}


  constexpr UxmlEnumeration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlEnumeration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlEnumeration& operator=(UxmlEnumeration&& o) noexcept = default;
  constexpr UxmlEnumeration& operator=(UxmlEnumeration const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_Values, put=__set_m_Values))  m_Values;

constexpr void __set_m_Values(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_Values() const;


// Properties

 System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=get_values, put=set_values))  values;


// Methods

/// @brief Method get_values addr 0x2c964cc size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<::StringW> get_values() ;

/// @brief Method set_values addr 0x2c964d4 size 0x5c virtual false final false
 void set_values(System::Collections::Generic::IEnumerable_1<::StringW> value) ;

/// @brief Method Equals addr 0x2c96530 size 0x14c virtual true final false
 bool Equals(UnityEngine::UIElements::UxmlTypeRestriction other) ;

static UnityEngine::UIElements::UxmlEnumeration New_ctor() ;

/// @brief Method .ctor addr 0x2c9667c size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UxmlEnumeration);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UxmlEnumeration, "UnityEngine.UIElements", "UxmlEnumeration");
