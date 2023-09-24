#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class IdBinder;
}
// Type: Zenject::IdBinder
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10862))
// CS Name: Zenject.IdBinder
class CORDL_TYPE IdBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~IdBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "IdBinder", modifiers: " const&", def_value: None }]
constexpr IdBinder(IdBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IdBinder", modifiers: "&&", def_value: None }]
constexpr IdBinder(IdBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IdBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IdBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IdBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IdBinder& operator=(IdBinder&& o) noexcept = default;
  constexpr IdBinder& operator=(IdBinder const& o) noexcept = default;
                


// Fields

 Zenject::BindInfo __declspec(property(get=__get__bindInfo, put=__set__bindInfo))  _bindInfo;

constexpr void __set__bindInfo(Zenject::BindInfo value) ;

constexpr Zenject::BindInfo __get__bindInfo() const;


// Methods

static Zenject::IdBinder New_ctor(Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d60c34 size 0x28 virtual false final false
 void _ctor(Zenject::BindInfo bindInfo) ;

/// @brief Method WithId addr 0x2d60c5c size 0x101c virtual false final false
 void WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::IdBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::IdBinder, "Zenject", "IdBinder");
