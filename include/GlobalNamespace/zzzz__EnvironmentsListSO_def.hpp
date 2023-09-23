#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentsListSO;
}
// Type: ::EnvironmentsListSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4210))
// CS Name: EnvironmentsListSO
class CORDL_TYPE EnvironmentsListSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EnvironmentsListSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentsListSO", modifiers: " const&", def_value: None }]
constexpr EnvironmentsListSO(EnvironmentsListSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentsListSO", modifiers: "&&", def_value: None }]
constexpr EnvironmentsListSO(EnvironmentsListSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentsListSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr EnvironmentsListSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentsListSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentsListSO& operator=(EnvironmentsListSO&& o) noexcept = default;
  constexpr EnvironmentsListSO& operator=(EnvironmentsListSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> __declspec(property(get=__get__environmentInfos, put=__set__environmentInfos))  _environmentInfos;

constexpr void __set__environmentInfos(::ArrayW<GlobalNamespace::EnvironmentInfoSO> value) ;

constexpr ::ArrayW<GlobalNamespace::EnvironmentInfoSO> __get__environmentInfos() const;


// Properties

 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> __declspec(property(get=get_environmentInfos))  environmentInfos;


// Methods

/// @brief Method get_environmentInfos addr 0x21bf49c size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> get_environmentInfos() ;

/// @brief Method GetEnvironmentInfoBySerializedName addr 0x21bf4a4 size 0x80 virtual false final false
 GlobalNamespace::EnvironmentInfoSO GetEnvironmentInfoBySerializedName(::StringW environmentSerializedName) ;

/// @brief Method GetAllEnvironmentInfosWithType addr 0x21bf524 size 0x178 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::EnvironmentInfoSO> GetAllEnvironmentInfosWithType(GlobalNamespace::EnvironmentTypeSO environmentType) ;

/// @brief Method GetFirstEnvironmentInfoWithType addr 0x21bf69c size 0x84 virtual false final false
 GlobalNamespace::EnvironmentInfoSO GetFirstEnvironmentInfoWithType(GlobalNamespace::EnvironmentTypeSO environmentType) ;

/// @brief Method GetLastEnvironmentInfoWithType addr 0x21bf720 size 0x80 virtual false final false
 GlobalNamespace::EnvironmentInfoSO GetLastEnvironmentInfoWithType(GlobalNamespace::EnvironmentTypeSO environmentType) ;

// Ctor Parameters []
explicit EnvironmentsListSO() ;

/// @brief Method .ctor addr 0x21bf7a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnvironmentsListSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentsListSO, "", "EnvironmentsListSO");
