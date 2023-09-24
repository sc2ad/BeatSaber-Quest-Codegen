#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class TerrainLayer;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_TerrainLayer;
}
// Type: HoudiniEngineUnity::Test_TerrainLayer
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9874))
// CS Name: HoudiniEngineUnity.Test_TerrainLayer
class CORDL_TYPE Test_TerrainLayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_TerrainLayer>
constexpr operator  HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_TerrainLayer>() const noexcept;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_TerrainLayer>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_TerrainLayer>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_TerrainLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_TerrainLayer", modifiers: " const&", def_value: None }]
constexpr Test_TerrainLayer(Test_TerrainLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_TerrainLayer", modifiers: "&&", def_value: None }]
constexpr Test_TerrainLayer(Test_TerrainLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_TerrainLayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_TerrainLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_TerrainLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_TerrainLayer& operator=(Test_TerrainLayer&& o) noexcept = default;
  constexpr Test_TerrainLayer& operator=(Test_TerrainLayer const& o) noexcept = default;
                


// Fields

 UnityEngine::TerrainLayer __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(UnityEngine::TerrainLayer value) ;

constexpr UnityEngine::TerrainLayer __get_self() const;


// Methods

static HoudiniEngineUnity::Test_TerrainLayer New_ctor(UnityEngine::TerrainLayer self) ;

/// @brief Method .ctor addr 0x2074bac size 0x28 virtual false final false
 void _ctor(UnityEngine::TerrainLayer self) ;

/// @brief Method IsNull addr 0x2074bd4 size 0x60 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x2074c34 size 0x464 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_TerrainLayer other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_TerrainLayer);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_TerrainLayer, "HoudiniEngineUnity", "Test_TerrainLayer");
