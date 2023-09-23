#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SkinColorSO;
}
// Type: ::SkinColorSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4778))
// CS Name: SkinColorSO
class CORDL_TYPE SkinColorSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SkinColorSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "SkinColorSO", modifiers: " const&", def_value: None }]
constexpr SkinColorSO(SkinColorSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SkinColorSO", modifiers: "&&", def_value: None }]
constexpr SkinColorSO(SkinColorSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SkinColorSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr SkinColorSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SkinColorSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SkinColorSO& operator=(SkinColorSO&& o) noexcept = default;
  constexpr SkinColorSO& operator=(SkinColorSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(::StringW value) ;

constexpr ::StringW __get__id() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;


// Properties

 ::StringW __declspec(property(get=get_id))  id;

 UnityEngine::Color __declspec(property(get=get_Color))  Color;


// Methods

/// @brief Method get_id addr 0x2229a08 size 0x8 virtual false final false
 ::StringW get_id() ;

/// @brief Method get_Color addr 0x2229a10 size 0xc virtual false final false
 UnityEngine::Color get_Color() ;

// Ctor Parameters []
explicit SkinColorSO() ;

/// @brief Method .ctor addr 0x2229a1c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SkinColorSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SkinColorSO, "", "SkinColorSO");
