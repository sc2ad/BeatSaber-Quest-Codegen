#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_Transform;
}
// Type: HoudiniEngineUnity::Test_HAPI_Transform
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9835))
// CS Name: HoudiniEngineUnity.Test_HAPI_Transform
class CORDL_TYPE Test_HAPI_Transform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_Transform>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_Transform>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Test_HAPI_Transform() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_Transform", modifiers: " const&", def_value: None }]
constexpr Test_HAPI_Transform(Test_HAPI_Transform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_Transform", modifiers: "&&", def_value: None }]
constexpr Test_HAPI_Transform(Test_HAPI_Transform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_HAPI_Transform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_HAPI_Transform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_HAPI_Transform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_HAPI_Transform& operator=(Test_HAPI_Transform&& o) noexcept = default;
  constexpr Test_HAPI_Transform& operator=(Test_HAPI_Transform const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HAPI_Transform __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(HoudiniEngineUnity::HAPI_Transform value) ;

constexpr HoudiniEngineUnity::HAPI_Transform __get_self() const;


// Methods

static HoudiniEngineUnity::Test_HAPI_Transform New_ctor(HoudiniEngineUnity::HAPI_Transform self) ;

/// @brief Method .ctor addr 0x2070630 size 0x34 virtual false final false
 void _ctor(HoudiniEngineUnity::HAPI_Transform self) ;

/// @brief Method IsEquivalentTo addr 0x2070664 size 0x200 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_Transform other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_HAPI_Transform);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_HAPI_Transform, "HoudiniEngineUnity", "Test_HAPI_Transform");
