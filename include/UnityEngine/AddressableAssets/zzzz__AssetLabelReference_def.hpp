#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::AddressableAssets {
class IKeyEvaluator;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetLabelReference;
}
// Type: UnityEngine.AddressableAssets::AssetLabelReference
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14362))
// CS Name: UnityEngine.AddressableAssets.AssetLabelReference
class CORDL_TYPE AssetLabelReference : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::AddressableAssets::IKeyEvaluator
constexpr operator  ::UnityEngine::AddressableAssets::IKeyEvaluator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssetLabelReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetLabelReference", modifiers: " const&", def_value: None }]
constexpr AssetLabelReference(AssetLabelReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetLabelReference", modifiers: "&&", def_value: None }]
constexpr AssetLabelReference(AssetLabelReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetLabelReference(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssetLabelReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetLabelReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetLabelReference& operator=(AssetLabelReference&& o) noexcept = default;
  constexpr AssetLabelReference& operator=(AssetLabelReference const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_LabelString, put=__set_m_LabelString))  m_LabelString;

constexpr void __set_m_LabelString(::StringW value) ;

constexpr ::StringW __get_m_LabelString() const;


// Properties

 ::StringW __declspec(property(get=get_labelString, put=set_labelString))  labelString;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_RuntimeKey))  RuntimeKey;


// Methods

/// @brief Method get_labelString addr 0x2892048 size 0x8 virtual false final false
 ::StringW get_labelString() ;

/// @brief Method set_labelString addr 0x2892050 size 0x8 virtual false final false
 void set_labelString(::StringW value) ;

/// @brief Method get_RuntimeKey addr 0x2892058 size 0x58 virtual true final true
 ::bs_hook::Il2CppWrapperType get_RuntimeKey() ;

/// @brief Method RuntimeKeyIsValid addr 0x28920b0 size 0x7c virtual true final true
 bool RuntimeKeyIsValid() ;

/// @brief Method GetHashCode addr 0x289212c size 0x20 virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit AssetLabelReference() ;

/// @brief Method .ctor addr 0x289214c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetLabelReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetLabelReference, "UnityEngine.AddressableAssets", "AssetLabelReference");
