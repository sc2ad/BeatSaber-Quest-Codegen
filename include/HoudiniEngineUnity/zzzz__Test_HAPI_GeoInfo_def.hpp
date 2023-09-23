#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_GeoInfo;
}
// Type: HoudiniEngineUnity::Test_HAPI_GeoInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9837))
// CS Name: HoudiniEngineUnity.Test_HAPI_GeoInfo
class CORDL_TYPE Test_HAPI_GeoInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_GeoInfo>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_GeoInfo>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Test_HAPI_GeoInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_GeoInfo", modifiers: " const&", def_value: None }]
constexpr Test_HAPI_GeoInfo(Test_HAPI_GeoInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_GeoInfo", modifiers: "&&", def_value: None }]
constexpr Test_HAPI_GeoInfo(Test_HAPI_GeoInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_HAPI_GeoInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_HAPI_GeoInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_HAPI_GeoInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_HAPI_GeoInfo& operator=(Test_HAPI_GeoInfo&& o) noexcept = default;
  constexpr Test_HAPI_GeoInfo& operator=(Test_HAPI_GeoInfo const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HAPI_GeoInfo __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(HoudiniEngineUnity::HAPI_GeoInfo value) ;

constexpr HoudiniEngineUnity::HAPI_GeoInfo __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "HoudiniEngineUnity::HAPI_GeoInfo", modifiers: "", def_value: None }]
explicit Test_HAPI_GeoInfo(HoudiniEngineUnity::HAPI_GeoInfo self) ;

/// @brief Method .ctor addr 0x20708ec size 0x34 virtual false final false
 void _ctor(HoudiniEngineUnity::HAPI_GeoInfo self) ;

/// @brief Method IsEquivalentTo addr 0x2070920 size 0x300 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_GeoInfo other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_HAPI_GeoInfo);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_HAPI_GeoInfo, "HoudiniEngineUnity", "Test_HAPI_GeoInfo");
