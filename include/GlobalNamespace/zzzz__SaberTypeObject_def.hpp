#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
struct SaberType;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberTypeObject;
}
// Type: ::SaberTypeObject
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5391))
// CS Name: SaberTypeObject
class CORDL_TYPE SaberTypeObject : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SaberTypeObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberTypeObject", modifiers: " const&", def_value: None }]
constexpr SaberTypeObject(SaberTypeObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberTypeObject", modifiers: "&&", def_value: None }]
constexpr SaberTypeObject(SaberTypeObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberTypeObject(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SaberTypeObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberTypeObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberTypeObject& operator=(SaberTypeObject&& o) noexcept = default;
  constexpr SaberTypeObject& operator=(SaberTypeObject const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SaberType __declspec(property(get=__get__saberType, put=__set__saberType))  _saberType;

constexpr void __set__saberType(GlobalNamespace::SaberType value) ;

constexpr GlobalNamespace::SaberType __get__saberType() const;


// Properties

 GlobalNamespace::SaberType __declspec(property(get=get_saberType))  saberType;


// Methods

/// @brief Method get_saberType addr 0x210c9d8 size 0x8 virtual false final false
 GlobalNamespace::SaberType get_saberType() ;

static GlobalNamespace::SaberTypeObject New_ctor() ;

/// @brief Method .ctor addr 0x210c9e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SaberTypeObject);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberTypeObject, "", "SaberTypeObject");
