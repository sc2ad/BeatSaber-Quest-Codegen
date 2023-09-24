#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivableWrapperClass_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Transform;
}
// Type: HoudiniEngineUnity::Test_Transform
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9848))
// CS Name: HoudiniEngineUnity.Test_Transform
class CORDL_TYPE Test_Transform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Transform>
constexpr operator  HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Transform>() const noexcept;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Transform>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Transform>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Test_Transform() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Transform", modifiers: " const&", def_value: None }]
constexpr Test_Transform(Test_Transform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_Transform", modifiers: "&&", def_value: None }]
constexpr Test_Transform(Test_Transform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_Transform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_Transform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_Transform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_Transform& operator=(Test_Transform&& o) noexcept = default;
  constexpr Test_Transform& operator=(Test_Transform const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_self() const;


// Methods

static HoudiniEngineUnity::Test_Transform New_ctor(UnityEngine::Transform self) ;

/// @brief Method .ctor addr 0x2071fe4 size 0x28 virtual false final false
 void _ctor(UnityEngine::Transform self) ;

/// @brief Method IsNull addr 0x207200c size 0x60 virtual true final true
 bool IsNull() ;

/// @brief Method IsEquivalentTo addr 0x207206c size 0x1cc virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_Transform other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_Transform);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_Transform, "HoudiniEngineUnity", "Test_Transform");
