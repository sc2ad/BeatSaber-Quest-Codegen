#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class IProvider;
}
// Forward declare root types
namespace Zenject::Internal {
class LookupId;
}
// Type: Zenject.Internal::LookupId
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11309))
// CS Name: Zenject.Internal.LookupId
class CORDL_TYPE LookupId : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LookupId() = default;

// Ctor Parameters [CppParam { name: "", ty: "LookupId", modifiers: " const&", def_value: None }]
constexpr LookupId(LookupId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LookupId", modifiers: "&&", def_value: None }]
constexpr LookupId(LookupId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LookupId(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LookupId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LookupId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LookupId& operator=(LookupId&& o) noexcept = default;
  constexpr LookupId& operator=(LookupId const& o) noexcept = default;
                


// Fields

 Zenject::IProvider __declspec(property(get=__get_Provider, put=__set_Provider))  Provider;

constexpr void __set_Provider(Zenject::IProvider value) ;

constexpr Zenject::IProvider __get_Provider() const;

 Zenject::BindingId __declspec(property(get=__get_BindingId, put=__set_BindingId))  BindingId;

constexpr void __set_BindingId(Zenject::BindingId value) ;

constexpr Zenject::BindingId __get_BindingId() const;


// Methods

// Ctor Parameters []
explicit LookupId() ;

/// @brief Method .ctor addr 0x2da7e78 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "provider", ty: "Zenject::IProvider", modifiers: "", def_value: None }, CppParam { name: "bindingId", ty: "Zenject::BindingId", modifiers: "", def_value: None }]
explicit LookupId(Zenject::IProvider provider, Zenject::BindingId bindingId) ;

/// @brief Method .ctor addr 0x2da7e80 size 0x9c virtual false final false
 void _ctor(Zenject::IProvider provider, Zenject::BindingId bindingId) ;

/// @brief Method GetHashCode addr 0x2da7f1c size 0x50 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
NEED_NO_BOX(Zenject::Internal::LookupId);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::LookupId, "Zenject.Internal", "LookupId");
