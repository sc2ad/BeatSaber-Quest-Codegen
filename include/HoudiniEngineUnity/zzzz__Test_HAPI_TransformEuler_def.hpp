#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
struct HAPI_TransformEuler;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_TransformEuler;
}
// Type: HoudiniEngineUnity::Test_HAPI_TransformEuler
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9841))
// CS Name: HoudiniEngineUnity.Test_HAPI_TransformEuler
class CORDL_TYPE Test_HAPI_TransformEuler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_TransformEuler>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_TransformEuler>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Test_HAPI_TransformEuler() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_TransformEuler", modifiers: " const&", def_value: None }]
constexpr Test_HAPI_TransformEuler(Test_HAPI_TransformEuler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_TransformEuler", modifiers: "&&", def_value: None }]
constexpr Test_HAPI_TransformEuler(Test_HAPI_TransformEuler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_HAPI_TransformEuler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_HAPI_TransformEuler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_HAPI_TransformEuler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_HAPI_TransformEuler& operator=(Test_HAPI_TransformEuler&& o) noexcept = default;
  constexpr Test_HAPI_TransformEuler& operator=(Test_HAPI_TransformEuler const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HAPI_TransformEuler __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(HoudiniEngineUnity::HAPI_TransformEuler value) ;

constexpr HoudiniEngineUnity::HAPI_TransformEuler __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "HoudiniEngineUnity::HAPI_TransformEuler", modifiers: "", def_value: None }]
explicit Test_HAPI_TransformEuler(HoudiniEngineUnity::HAPI_TransformEuler self) ;

/// @brief Method .ctor addr 0x2070e50 size 0x34 virtual false final false
 void _ctor(HoudiniEngineUnity::HAPI_TransformEuler self) ;

/// @brief Method IsEquivalentTo addr 0x2070e84 size 0x254 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_TransformEuler other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_HAPI_TransformEuler);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_HAPI_TransformEuler, "HoudiniEngineUnity", "Test_HAPI_TransformEuler");
