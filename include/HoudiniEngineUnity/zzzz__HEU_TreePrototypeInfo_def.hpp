#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_TreePrototypeInfo;
}
// Type: HoudiniEngineUnity::HEU_TreePrototypeInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9895))
// CS Name: HoudiniEngineUnity.HEU_TreePrototypeInfo
class CORDL_TYPE HEU_TreePrototypeInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HEU_TreePrototypeInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TreePrototypeInfo", modifiers: " const&", def_value: None }]
constexpr HEU_TreePrototypeInfo(HEU_TreePrototypeInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TreePrototypeInfo", modifiers: "&&", def_value: None }]
constexpr HEU_TreePrototypeInfo(HEU_TreePrototypeInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_TreePrototypeInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_TreePrototypeInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_TreePrototypeInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_TreePrototypeInfo& operator=(HEU_TreePrototypeInfo&& o) noexcept = default;
  constexpr HEU_TreePrototypeInfo& operator=(HEU_TreePrototypeInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__prefabPath, put=__set__prefabPath))  _prefabPath;

constexpr void __set__prefabPath(::StringW value) ;

constexpr ::StringW __get__prefabPath() const;

 float_t __declspec(property(get=__get__bendfactor, put=__set__bendfactor))  _bendfactor;

constexpr void __set__bendfactor(float_t value) ;

constexpr float_t __get__bendfactor() const;


// Methods

/// @brief Method IsEquivalentTo addr 0x2077c34 size 0x14c virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::HEU_TreePrototypeInfo other) ;

// Ctor Parameters []
explicit HEU_TreePrototypeInfo() ;

/// @brief Method .ctor addr 0x2077d80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TreePrototypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TreePrototypeInfo, "HoudiniEngineUnity", "HEU_TreePrototypeInfo");
