#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_ParmInfo;
}
// Type: HoudiniEngineUnity::Test_HAPI_ParmInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9843))
// CS Name: HoudiniEngineUnity.Test_HAPI_ParmInfo
class CORDL_TYPE Test_HAPI_ParmInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_ParmInfo>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_ParmInfo>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~Test_HAPI_ParmInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_ParmInfo", modifiers: " const&", def_value: None }]
constexpr Test_HAPI_ParmInfo(Test_HAPI_ParmInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_ParmInfo", modifiers: "&&", def_value: None }]
constexpr Test_HAPI_ParmInfo(Test_HAPI_ParmInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_HAPI_ParmInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_HAPI_ParmInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_HAPI_ParmInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_HAPI_ParmInfo& operator=(Test_HAPI_ParmInfo&& o) noexcept = default;
  constexpr Test_HAPI_ParmInfo& operator=(Test_HAPI_ParmInfo const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HAPI_ParmInfo __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(HoudiniEngineUnity::HAPI_ParmInfo value) ;

constexpr HoudiniEngineUnity::HAPI_ParmInfo __get_self() const;


// Methods

static HoudiniEngineUnity::Test_HAPI_ParmInfo New_ctor(HoudiniEngineUnity::HAPI_ParmInfo self) ;

/// @brief Method .ctor addr 0x2071160 size 0x34 virtual false final false
 void _ctor(HoudiniEngineUnity::HAPI_ParmInfo self) ;

/// @brief Method IsEquivalentTo addr 0x2071194 size 0x78c virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_ParmInfo other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_HAPI_ParmInfo);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_HAPI_ParmInfo, "HoudiniEngineUnity", "Test_HAPI_ParmInfo");
