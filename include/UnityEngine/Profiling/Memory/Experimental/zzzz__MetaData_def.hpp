#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::Profiling::Memory::Experimental {
class MetaData;
}
// Type: UnityEngine.Profiling.Memory.Experimental::MetaData
namespace UnityEngine::Profiling::Memory::Experimental {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10234))
// CS Name: UnityEngine.Profiling.Memory.Experimental.MetaData
class CORDL_TYPE MetaData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MetaData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: " const&", def_value: None }]
constexpr MetaData(MetaData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: "&&", def_value: None }]
constexpr MetaData(MetaData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MetaData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MetaData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MetaData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MetaData& operator=(MetaData&& o) noexcept = default;
  constexpr MetaData& operator=(MetaData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(::StringW value) ;

constexpr ::StringW __get_content() const;

 ::StringW __declspec(property(get=__get_platform, put=__set_platform))  platform;

constexpr void __set_platform(::StringW value) ;

constexpr ::StringW __get_platform() const;


// Methods

// Ctor Parameters []
explicit MetaData() ;

/// @brief Method .ctor addr 0x2b6ea8c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Profiling::Memory::Experimental
NEED_NO_BOX(UnityEngine::Profiling::Memory::Experimental::MetaData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Profiling::Memory::Experimental::MetaData, "UnityEngine.Profiling.Memory.Experimental", "MetaData");
