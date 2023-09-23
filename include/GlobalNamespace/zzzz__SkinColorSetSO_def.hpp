#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class SkinColorSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SkinColorSetSO;
}
// Type: ::SkinColorSetSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4777))
// CS Name: SkinColorSetSO
class CORDL_TYPE SkinColorSetSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SkinColorSetSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "SkinColorSetSO", modifiers: " const&", def_value: None }]
constexpr SkinColorSetSO(SkinColorSetSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SkinColorSetSO", modifiers: "&&", def_value: None }]
constexpr SkinColorSetSO(SkinColorSetSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SkinColorSetSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr SkinColorSetSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SkinColorSetSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SkinColorSetSO& operator=(SkinColorSetSO&& o) noexcept = default;
  constexpr SkinColorSetSO& operator=(SkinColorSetSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::SkinColorSO> __declspec(property(get=__get__colors, put=__set__colors))  _colors;

constexpr void __set__colors(::ArrayW<GlobalNamespace::SkinColorSO> value) ;

constexpr ::ArrayW<GlobalNamespace::SkinColorSO> __get__colors() const;


// Properties

 ::ArrayW<GlobalNamespace::SkinColorSO> __declspec(property(get=get_colors))  colors;


// Methods

/// @brief Method get_colors addr 0x22299f8 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::SkinColorSO> get_colors() ;

// Ctor Parameters []
explicit SkinColorSetSO() ;

/// @brief Method .ctor addr 0x2229a00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SkinColorSetSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SkinColorSetSO, "", "SkinColorSetSO");
