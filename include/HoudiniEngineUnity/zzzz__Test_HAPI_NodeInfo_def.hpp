#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_NodeInfo;
}
// Type: HoudiniEngineUnity::Test_HAPI_NodeInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9831))
// CS Name: HoudiniEngineUnity.Test_HAPI_NodeInfo
class CORDL_TYPE Test_HAPI_NodeInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_NodeInfo>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_NodeInfo>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Test_HAPI_NodeInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_NodeInfo", modifiers: " const&", def_value: None }]
constexpr Test_HAPI_NodeInfo(Test_HAPI_NodeInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_NodeInfo", modifiers: "&&", def_value: None }]
constexpr Test_HAPI_NodeInfo(Test_HAPI_NodeInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_HAPI_NodeInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_HAPI_NodeInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_HAPI_NodeInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_HAPI_NodeInfo& operator=(Test_HAPI_NodeInfo&& o) noexcept = default;
  constexpr Test_HAPI_NodeInfo& operator=(Test_HAPI_NodeInfo const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HAPI_NodeInfo __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(HoudiniEngineUnity::HAPI_NodeInfo value) ;

constexpr HoudiniEngineUnity::HAPI_NodeInfo __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "HoudiniEngineUnity::HAPI_NodeInfo", modifiers: "", def_value: None }]
explicit Test_HAPI_NodeInfo(HoudiniEngineUnity::HAPI_NodeInfo self) ;

/// @brief Method .ctor addr 0x206ffb8 size 0x34 virtual false final false
 void _ctor(HoudiniEngineUnity::HAPI_NodeInfo self) ;

/// @brief Method IsEquivalentTo addr 0x206ffec size 0x340 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_NodeInfo other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_HAPI_NodeInfo);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_HAPI_NodeInfo, "HoudiniEngineUnity", "Test_HAPI_NodeInfo");
