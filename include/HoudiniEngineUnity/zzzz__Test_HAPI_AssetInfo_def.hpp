#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
struct HAPI_AssetInfo;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_AssetInfo;
}
// Type: HoudiniEngineUnity::Test_HAPI_AssetInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9829))
// CS Name: HoudiniEngineUnity.Test_HAPI_AssetInfo
class CORDL_TYPE Test_HAPI_AssetInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AssetInfo>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AssetInfo>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Test_HAPI_AssetInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_AssetInfo", modifiers: " const&", def_value: None }]
constexpr Test_HAPI_AssetInfo(Test_HAPI_AssetInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_AssetInfo", modifiers: "&&", def_value: None }]
constexpr Test_HAPI_AssetInfo(Test_HAPI_AssetInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_HAPI_AssetInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_HAPI_AssetInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_HAPI_AssetInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_HAPI_AssetInfo& operator=(Test_HAPI_AssetInfo&& o) noexcept = default;
  constexpr Test_HAPI_AssetInfo& operator=(Test_HAPI_AssetInfo const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HAPI_AssetInfo __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(HoudiniEngineUnity::HAPI_AssetInfo value) ;

constexpr HoudiniEngineUnity::HAPI_AssetInfo __get_self() const;


// Methods

static HoudiniEngineUnity::Test_HAPI_AssetInfo New_ctor(HoudiniEngineUnity::HAPI_AssetInfo self) ;

/// @brief Method .ctor addr 0x206fc3c size 0x34 virtual false final false
 void _ctor(HoudiniEngineUnity::HAPI_AssetInfo self) ;

/// @brief Method IsEquivalentTo addr 0x206fc70 size 0x2c0 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_AssetInfo other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_HAPI_AssetInfo);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_HAPI_AssetInfo, "HoudiniEngineUnity", "Test_HAPI_AssetInfo");
