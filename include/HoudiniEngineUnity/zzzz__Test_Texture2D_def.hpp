#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class Texture2D;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Texture2D;
}
// Type: HoudiniEngineUnity::Test_Texture2D
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9877))
// CS Name: HoudiniEngineUnity.Test_Texture2D
class CORDL_TYPE Test_Texture2D : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Texture2D>
constexpr operator  HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Texture2D>() const noexcept;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Texture2D>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Texture2D>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_Texture2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Texture2D", modifiers: " const&", def_value: None }]
constexpr Test_Texture2D(Test_Texture2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Texture2D", modifiers: "&&", def_value: None }]
constexpr Test_Texture2D(Test_Texture2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_Texture2D(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_Texture2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_Texture2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_Texture2D& operator=(Test_Texture2D&& o) noexcept = default;
  constexpr Test_Texture2D& operator=(Test_Texture2D const& o) noexcept = default;
                


// Fields

 UnityEngine::Texture2D __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get_self() const;


// Methods

static HoudiniEngineUnity::Test_Texture2D New_ctor(UnityEngine::Texture2D self) ;

/// @brief Method .ctor addr 0x2075488 size 0x28 virtual false final false
 void _ctor(UnityEngine::Texture2D self) ;

/// @brief Method IsNull addr 0x20754b0 size 0x60 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x2075510 size 0x108 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_Texture2D other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_Texture2D);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_Texture2D, "HoudiniEngineUnity", "Test_Texture2D");
