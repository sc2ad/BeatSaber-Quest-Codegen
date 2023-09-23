#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IAvatarPart;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class AvatarPartSO_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class AvatarPartSO_1<T>;
}
// Type: ::AvatarPartSO`1
// Type: ::AvatarPartSO`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4773)), TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4773), inst: 2 })
// CS Name: AvatarPartSO`1
class CORDL_TYPE AvatarPartSO_1<T> : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IAvatarPart
constexpr operator  GlobalNamespace::IAvatarPart() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AvatarPartSO_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPartSO_1", modifiers: " const&", def_value: None }]
constexpr AvatarPartSO_1(AvatarPartSO_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPartSO_1", modifiers: "&&", def_value: None }]
constexpr AvatarPartSO_1(AvatarPartSO_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarPartSO_1(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr AvatarPartSO_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarPartSO_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarPartSO_1& operator=(AvatarPartSO_1&& o) noexcept = default;
  constexpr AvatarPartSO_1& operator=(AvatarPartSO_1 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(::StringW value) ;

constexpr ::StringW __get__id() const;

 ::StringW __declspec(property(get=__get__localizationKey, put=__set__localizationKey))  _localizationKey;

constexpr void __set__localizationKey(::StringW value) ;

constexpr ::StringW __get__localizationKey() const;

 T __declspec(property(get=__get__partAsset, put=__set__partAsset))  _partAsset;

constexpr void __set__partAsset(T value) ;

constexpr T __get__partAsset() const;


// Properties

 T __declspec(property(get=get_partAsset))  partAsset;

 ::StringW __declspec(property(get=get_id))  id;

 ::StringW __declspec(property(get=get_localizationKey))  localizationKey;

 ::StringW __declspec(property(get=get_localizedName))  localizedName;


// Methods

/// @brief Method get_partAsset addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_partAsset() ;

/// @brief Method get_id addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW get_id() ;

/// @brief Method get_localizationKey addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_localizationKey() ;

/// @brief Method get_localizedName addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW get_localizedName() ;

// Ctor Parameters []
explicit AvatarPartSO_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::AvatarPartSO_1, "", "AvatarPartSO`1");
