#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform::Models {
class AssetDetails;
}
// Forward declare root types
namespace Oculus::Platform {
class AssetFile;
}
// Type: Oculus.Platform::AssetFile
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13324))
// CS Name: Oculus.Platform.AssetFile
class CORDL_TYPE AssetFile : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AssetFile() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetFile", modifiers: " const&", def_value: None }]
constexpr AssetFile(AssetFile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetFile", modifiers: "&&", def_value: None }]
constexpr AssetFile(AssetFile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetFile(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssetFile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetFile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetFile& operator=(AssetFile&& o) noexcept = default;
  constexpr AssetFile& operator=(AssetFile const& o) noexcept = default;
                


// Methods

/// @brief Method Delete addr 0x2590840 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDeleteResult> Delete(uint64_t assetFileID) ;

/// @brief Method DeleteById addr 0x25909a0 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDeleteResult> DeleteById(uint64_t assetFileID) ;

/// @brief Method DeleteByName addr 0x2590b00 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDeleteResult> DeleteByName(::StringW assetFileName) ;

/// @brief Method Download addr 0x2590c60 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadResult> Download(uint64_t assetFileID) ;

/// @brief Method DownloadById addr 0x2590dc0 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadResult> DownloadById(uint64_t assetFileID) ;

/// @brief Method DownloadByName addr 0x2590f20 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadResult> DownloadByName(::StringW assetFileName) ;

/// @brief Method DownloadCancel addr 0x2591080 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadCancelResult> DownloadCancel(uint64_t assetFileID) ;

/// @brief Method DownloadCancelById addr 0x25911e0 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadCancelResult> DownloadCancelById(uint64_t assetFileID) ;

/// @brief Method DownloadCancelByName addr 0x2591340 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadCancelResult> DownloadCancelByName(::StringW assetFileName) ;

/// @brief Method GetList addr 0x25914a0 size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetDetailsList> GetList() ;

/// @brief Method Status addr 0x25915f8 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetDetails> Status(uint64_t assetFileID) ;

/// @brief Method StatusById addr 0x2591758 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetDetails> StatusById(uint64_t assetFileID) ;

/// @brief Method StatusByName addr 0x25918b8 size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetDetails> StatusByName(::StringW assetFileName) ;

/// @brief Method SetDownloadUpdateNotificationCallback addr 0x2591a18 size 0x74 virtual false final false
static void SetDownloadUpdateNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::AssetFileDownloadUpdate> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::AssetFile);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::AssetFile, "Oculus.Platform", "AssetFile");
