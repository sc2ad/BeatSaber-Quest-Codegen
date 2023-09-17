#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_ObjectInfo;
}
// Type: HoudiniEngineUnity::Test_HAPI_ObjectInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9833))
// CS Name: HoudiniEngineUnity.Test_HAPI_ObjectInfo
class CORDL_TYPE Test_HAPI_ObjectInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Test_HAPI_ObjectInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_ObjectInfo", modifiers: " const&", def_value: None }]
constexpr Test_HAPI_ObjectInfo(Test_HAPI_ObjectInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_ObjectInfo", modifiers: "&&", def_value: None }]
constexpr Test_HAPI_ObjectInfo(Test_HAPI_ObjectInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_HAPI_ObjectInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_HAPI_ObjectInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_HAPI_ObjectInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_HAPI_ObjectInfo& operator=(Test_HAPI_ObjectInfo&& o) noexcept = default;
  constexpr Test_HAPI_ObjectInfo& operator=(Test_HAPI_ObjectInfo const& o) noexcept = default;
                


// Fields

 ::HoudiniEngineUnity::HAPI_ObjectInfo __declspec(property(get=__get_self, put=__set_self))  self;

constexpr void __set_self(::HoudiniEngineUnity::HAPI_ObjectInfo value) ;

constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo __get_self() const;


// Methods

// Ctor Parameters [CppParam { name: "self", ty: "::HoudiniEngineUnity::HAPI_ObjectInfo", modifiers: "", def_value: None }]
explicit Test_HAPI_ObjectInfo(::HoudiniEngineUnity::HAPI_ObjectInfo self) ;

/// @brief Method .ctor addr 0x20703b4 size 0x3c virtual false final false
 void _ctor(::HoudiniEngineUnity::HAPI_ObjectInfo self) ;

/// @brief Method IsEquivalentTo addr 0x20703f0 size 0x1b8 virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_ObjectInfo other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_ObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_ObjectInfo, "HoudiniEngineUnity", "Test_HAPI_ObjectInfo");
