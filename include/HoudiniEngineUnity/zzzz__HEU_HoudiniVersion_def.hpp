#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HoudiniVersion;
}
// Type: HoudiniEngineUnity::HEU_HoudiniVersion
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9700))
// CS Name: HoudiniEngineUnity.HEU_HoudiniVersion
class CORDL_TYPE HEU_HoudiniVersion : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_HoudiniVersion() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniVersion", modifiers: " const&", def_value: None }]
constexpr HEU_HoudiniVersion(HEU_HoudiniVersion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniVersion", modifiers: "&&", def_value: None }]
constexpr HEU_HoudiniVersion(HEU_HoudiniVersion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_HoudiniVersion(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_HoudiniVersion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_HoudiniVersion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_HoudiniVersion& operator=(HEU_HoudiniVersion&& o) noexcept = default;
  constexpr HEU_HoudiniVersion& operator=(HEU_HoudiniVersion const& o) noexcept = default;
                


// Fields

/// @brief Field HOUDINI_MAJOR offset 0
static constexpr int32_t  HOUDINI_MAJOR{18};

/// @brief Field HOUDINI_MINOR offset 0
static constexpr int32_t  HOUDINI_MINOR{5};

/// @brief Field HOUDINI_BUILD offset 0
static constexpr int32_t  HOUDINI_BUILD{633};

/// @brief Field HOUDINI_PATCH offset 0
static constexpr int32_t  HOUDINI_PATCH{0};

/// @brief Field HOUDINI_VERSION_STRING offset 0
static constexpr ::ConstString  HOUDINI_VERSION_STRING{u"18.5.633"};

/// @brief Field HOUDINI_ENGINE_MAJOR offset 0
static constexpr int32_t  HOUDINI_ENGINE_MAJOR{3};

/// @brief Field HOUDINI_ENGINE_MINOR offset 0
static constexpr int32_t  HOUDINI_ENGINE_MINOR{6};

/// @brief Field HOUDINI_ENGINE_API offset 0
static constexpr int32_t  HOUDINI_ENGINE_API{3};

/// @brief Field UNITY_PLUGIN_VERSION offset 0
static constexpr int32_t  UNITY_PLUGIN_VERSION{2};

/// @brief Field HOUDINI_INSTALL_PATH offset 0
static constexpr ::ConstString  HOUDINI_INSTALL_PATH{u"/opt/hfs18.5.633"};

/// @brief Field HAPI_BIN_PATH offset 0
static constexpr ::ConstString  HAPI_BIN_PATH{u"/bin"};

/// @brief Field HAPI_LIBRARY_PATH offset 0
static constexpr ::ConstString  HAPI_LIBRARY_PATH{u"/dsolib"};

/// @brief Field HAPI_SERVER offset 0
static constexpr ::ConstString  HAPI_SERVER{u"/opt/hfs18.5.633/bin/HARS"};

/// @brief Field HAPI_LIBRARY offset 0
static constexpr ::ConstString  HAPI_LIBRARY{u"/opt/hfs18.5.633/dsolib/libHAPIL.so"};

/// @brief Field HARC_LIBRARY offset 0
static constexpr ::ConstString  HARC_LIBRARY{u"/opt/hfs18.5.633/dsolib/libHARC.so"};


// Methods

// Ctor Parameters []
explicit HEU_HoudiniVersion() ;

/// @brief Method .ctor addr 0x201f7f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HoudiniVersion);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniVersion, "HoudiniEngineUnity", "HEU_HoudiniVersion");
