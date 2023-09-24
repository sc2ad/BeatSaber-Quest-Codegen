#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class AddComponentMenu;
}
// Type: UnityEngine::AddComponentMenu
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10156))
// CS Name: UnityEngine.AddComponentMenu
class CORDL_TYPE AddComponentMenu : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AddComponentMenu() = default;

// Ctor Parameters [CppParam { name: "", ty: "AddComponentMenu", modifiers: " const&", def_value: None }]
constexpr AddComponentMenu(AddComponentMenu const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AddComponentMenu", modifiers: "&&", def_value: None }]
constexpr AddComponentMenu(AddComponentMenu&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AddComponentMenu(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AddComponentMenu& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AddComponentMenu& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AddComponentMenu& operator=(AddComponentMenu&& o) noexcept = default;
  constexpr AddComponentMenu& operator=(AddComponentMenu const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_AddComponentMenu, put=__set_m_AddComponentMenu))  m_AddComponentMenu;

constexpr void __set_m_AddComponentMenu(::StringW value) ;

constexpr ::StringW __get_m_AddComponentMenu() const;

 int32_t __declspec(property(get=__get_m_Ordering, put=__set_m_Ordering))  m_Ordering;

constexpr void __set_m_Ordering(int32_t value) ;

constexpr int32_t __get_m_Ordering() const;


// Methods

static UnityEngine::AddComponentMenu New_ctor(::StringW menuName) ;

/// @brief Method .ctor addr 0x2b5b230 size 0x2c virtual false final false
 void _ctor(::StringW menuName) ;

static UnityEngine::AddComponentMenu New_ctor(::StringW menuName, int32_t order) ;

/// @brief Method .ctor addr 0x2b5b25c size 0x30 virtual false final false
 void _ctor(::StringW menuName, int32_t order) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AddComponentMenu);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddComponentMenu, "UnityEngine", "AddComponentMenu");
