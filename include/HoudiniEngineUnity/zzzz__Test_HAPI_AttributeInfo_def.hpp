#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_AttributeInfo;
}
// Type: HoudiniEngineUnity::Test_HAPI_AttributeInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9839))
// CS Name: HoudiniEngineUnity.Test_HAPI_AttributeInfo
class CORDL_TYPE Test_HAPI_AttributeInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AttributeInfo>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AttributeInfo>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Test_HAPI_AttributeInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_AttributeInfo", modifiers: " const&", def_value: None }]
constexpr Test_HAPI_AttributeInfo(Test_HAPI_AttributeInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_AttributeInfo", modifiers: "&&", def_value: None }]
constexpr Test_HAPI_AttributeInfo(Test_HAPI_AttributeInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_HAPI_AttributeInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_HAPI_AttributeInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_HAPI_AttributeInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_HAPI_AttributeInfo& operator=(Test_HAPI_AttributeInfo&& o) noexcept = default;
  constexpr Test_HAPI_AttributeInfo& operator=(Test_HAPI_AttributeInfo const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HAPI_AttributeInfo __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(HoudiniEngineUnity::HAPI_AttributeInfo value) ;

constexpr HoudiniEngineUnity::HAPI_AttributeInfo __get_self() const;


// Methods

static HoudiniEngineUnity::Test_HAPI_AttributeInfo New_ctor(HoudiniEngineUnity::HAPI_AttributeInfo self) ;

/// @brief Method .ctor addr 0x2070ca8 size 0x34 virtual false final false
 void _ctor(HoudiniEngineUnity::HAPI_AttributeInfo self) ;

/// @brief Method IsEquivalentTo addr 0x2070cdc size 0xec virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_AttributeInfo other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_HAPI_AttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_HAPI_AttributeInfo, "HoudiniEngineUnity", "Test_HAPI_AttributeInfo");
