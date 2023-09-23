#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorBindInfo;
}
// Type: Zenject::SubContainerCreatorBindInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11184))
// CS Name: Zenject.SubContainerCreatorBindInfo
class CORDL_TYPE SubContainerCreatorBindInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SubContainerCreatorBindInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorBindInfo", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorBindInfo(SubContainerCreatorBindInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorBindInfo", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorBindInfo(SubContainerCreatorBindInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorBindInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubContainerCreatorBindInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorBindInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorBindInfo& operator=(SubContainerCreatorBindInfo&& o) noexcept = default;
  constexpr SubContainerCreatorBindInfo& operator=(SubContainerCreatorBindInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__DefaultParentName_k__BackingField, put=__set__DefaultParentName_k__BackingField))  _DefaultParentName_k__BackingField;

constexpr void __set__DefaultParentName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__DefaultParentName_k__BackingField() const;

 bool __declspec(property(get=__get__CreateKernel_k__BackingField, put=__set__CreateKernel_k__BackingField))  _CreateKernel_k__BackingField;

constexpr void __set__CreateKernel_k__BackingField(bool value) ;

constexpr bool __get__CreateKernel_k__BackingField() const;

 System::Type __declspec(property(get=__get__KernelType_k__BackingField, put=__set__KernelType_k__BackingField))  _KernelType_k__BackingField;

constexpr void __set__KernelType_k__BackingField(System::Type value) ;

constexpr System::Type __get__KernelType_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_DefaultParentName, put=set_DefaultParentName))  DefaultParentName;

 bool __declspec(property(get=get_CreateKernel, put=set_CreateKernel))  CreateKernel;

 System::Type __declspec(property(get=get_KernelType, put=set_KernelType))  KernelType;


// Methods

/// @brief Method get_DefaultParentName addr 0x2d91a6c size 0x8 virtual false final false
 ::StringW get_DefaultParentName() ;

/// @brief Method set_DefaultParentName addr 0x2d91a74 size 0x8 virtual false final false
 void set_DefaultParentName(::StringW value) ;

/// @brief Method get_CreateKernel addr 0x2d91a7c size 0x8 virtual false final false
 bool get_CreateKernel() ;

/// @brief Method set_CreateKernel addr 0x2d91a84 size 0xc virtual false final false
 void set_CreateKernel(bool value) ;

/// @brief Method get_KernelType addr 0x2d91a90 size 0x8 virtual false final false
 System::Type get_KernelType() ;

/// @brief Method set_KernelType addr 0x2d91a98 size 0x8 virtual false final false
 void set_KernelType(System::Type value) ;

// Ctor Parameters []
explicit SubContainerCreatorBindInfo() ;

/// @brief Method .ctor addr 0x2d91aa0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SubContainerCreatorBindInfo);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorBindInfo, "Zenject", "SubContainerCreatorBindInfo");
