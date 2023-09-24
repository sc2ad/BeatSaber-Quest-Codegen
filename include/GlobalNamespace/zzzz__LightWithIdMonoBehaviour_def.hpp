#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class ILightWithId;
}
// Forward declare root types
namespace GlobalNamespace {
class LightWithIdMonoBehaviour;
}
// Type: ::LightWithIdMonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14703))
// CS Name: LightWithIdMonoBehaviour
class CORDL_TYPE LightWithIdMonoBehaviour : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::ILightWithId
constexpr operator  GlobalNamespace::ILightWithId() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LightWithIdMonoBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightWithIdMonoBehaviour", modifiers: " const&", def_value: None }]
constexpr LightWithIdMonoBehaviour(LightWithIdMonoBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightWithIdMonoBehaviour", modifiers: "&&", def_value: None }]
constexpr LightWithIdMonoBehaviour(LightWithIdMonoBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightWithIdMonoBehaviour(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightWithIdMonoBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightWithIdMonoBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightWithIdMonoBehaviour& operator=(LightWithIdMonoBehaviour&& o) noexcept = default;
  constexpr LightWithIdMonoBehaviour& operator=(LightWithIdMonoBehaviour const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__ID, put=__set__ID))  _ID;

constexpr void __set__ID(int32_t value) ;

constexpr int32_t __get__ID() const;

 GlobalNamespace::LightWithIdManager __declspec(property(get=__get__lightManager, put=__set__lightManager))  _lightManager;

constexpr void __set__lightManager(GlobalNamespace::LightWithIdManager value) ;

constexpr GlobalNamespace::LightWithIdManager __get__lightManager() const;

 bool __declspec(property(get=__get__isRegistered, put=__set__isRegistered))  _isRegistered;

constexpr void __set__isRegistered(bool value) ;

constexpr bool __get__isRegistered() const;


// Properties

 int32_t __declspec(property(get=get_lightId))  lightId;

 bool __declspec(property(get=get_isRegistered))  isRegistered;


// Methods

/// @brief Method get_lightId addr 0x1f9e6f4 size 0x8 virtual true final true
 int32_t get_lightId() ;

/// @brief Method get_isRegistered addr 0x1f9e6fc size 0x8 virtual true final true
 bool get_isRegistered() ;

/// @brief Method __SetIsRegistered addr 0x1f9e704 size 0xc virtual true final true
 void __SetIsRegistered() ;

/// @brief Method __SetIsUnRegistered addr 0x1f9e710 size 0x8 virtual true final true
 void __SetIsUnRegistered() ;

/// @brief Method ColorWasSet addr 0x0 size 0xffffffffffffffff virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

/// @brief Method OnEnable addr 0x1f9e718 size 0x4 virtual true final false
 void OnEnable() ;

/// @brief Method Start addr 0x1f9e7a0 size 0x4 virtual true final false
 void Start() ;

/// @brief Method OnDisable addr 0x1f9e7a4 size 0x84 virtual true final false
 void OnDisable() ;

/// @brief Method RegisterLight addr 0x1f9e71c size 0x84 virtual false final false
 void RegisterLight() ;

/// @brief Method SetLightId addr 0x1f9e828 size 0xa8 virtual false final false
 void SetLightId(int32_t newLightId) ;

static GlobalNamespace::LightWithIdMonoBehaviour New_ctor() ;

/// @brief Method .ctor addr 0x1f9c4cc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightWithIdMonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightWithIdMonoBehaviour, "", "LightWithIdMonoBehaviour");
