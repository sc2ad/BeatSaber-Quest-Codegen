#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Terrain;
}
// Type: HoudiniEngineUnity::Test_Terrain
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9886))
// CS Name: HoudiniEngineUnity.Test_Terrain
class CORDL_TYPE Test_Terrain : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Terrain>
constexpr operator  HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Terrain>() const noexcept;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Terrain>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Terrain>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_Terrain() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Terrain", modifiers: " const&", def_value: None }]
constexpr Test_Terrain(Test_Terrain const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Terrain", modifiers: "&&", def_value: None }]
constexpr Test_Terrain(Test_Terrain&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_Terrain(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_Terrain& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_Terrain& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_Terrain& operator=(Test_Terrain&& o) noexcept = default;
  constexpr Test_Terrain& operator=(Test_Terrain const& o) noexcept = default;
                


// Fields

 UnityEngine::Terrain __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(UnityEngine::Terrain value) ;

constexpr UnityEngine::Terrain __get_self() const;


// Methods

static HoudiniEngineUnity::Test_Terrain New_ctor(UnityEngine::Terrain self) ;

/// @brief Method .ctor addr 0x2076904 size 0x28 virtual false final false
 void _ctor(UnityEngine::Terrain self) ;

/// @brief Method IsNull addr 0x207692c size 0x60 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x207698c size 0x15c virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_Terrain other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_Terrain);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_Terrain, "HoudiniEngineUnity", "Test_Terrain");
