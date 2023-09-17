#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class CloudStorageMetadataList;
}
namespace Oculus::Platform::Models {
class CloudStorageMetadata;
}
namespace Oculus::Platform::Models {
class CloudStorageData;
}
namespace Oculus::Platform::Models {
class CloudStorageUpdateResponse;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform::Models {
class CloudStorageConflictMetadata;
}
// Forward declare root types
namespace Oculus::Platform {
class CloudStorage;
}
// Type: Oculus.Platform::CloudStorage
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13326))
// CS Name: Oculus.Platform.CloudStorage
class CORDL_TYPE CloudStorage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CloudStorage() = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorage", modifiers: " const&", def_value: None }]
constexpr CloudStorage(CloudStorage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorage", modifiers: "&&", def_value: None }]
constexpr CloudStorage(CloudStorage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CloudStorage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CloudStorage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CloudStorage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CloudStorage& operator=(CloudStorage&& o) noexcept = default;
  constexpr CloudStorage& operator=(CloudStorage const& o) noexcept = default;
                


// Methods

/// @brief Method Delete addr 0x2591c2c size 0x170 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse> Delete(::StringW bucket, ::StringW key) ;

/// @brief Method Load addr 0x2591d9c size 0x170 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData> Load(::StringW bucket, ::StringW key) ;

/// @brief Method LoadBucketMetadata addr 0x2591f0c size 0x160 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList> LoadBucketMetadata(::StringW bucket) ;

/// @brief Method LoadConflictMetadata addr 0x259206c size 0x170 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageConflictMetadata> LoadConflictMetadata(::StringW bucket, ::StringW key) ;

/// @brief Method LoadHandle addr 0x25921dc size 0x160 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData> LoadHandle(::StringW handle) ;

/// @brief Method LoadMetadata addr 0x259233c size 0x170 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadata> LoadMetadata(::StringW bucket, ::StringW key) ;

/// @brief Method ResolveKeepLocal addr 0x25924ac size 0x178 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse> ResolveKeepLocal(::StringW bucket, ::StringW key, ::StringW remoteHandle) ;

/// @brief Method ResolveKeepRemote addr 0x2592624 size 0x178 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse> ResolveKeepRemote(::StringW bucket, ::StringW key, ::StringW remoteHandle) ;

/// @brief Method Save addr 0x259279c size 0x1a4 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse> Save(::StringW bucket, ::StringW key, ::ArrayW<uint8_t> data, int64_t counter, ::StringW extraData) ;

/// @brief Method GetNextCloudStorageMetadataListPage addr 0x2592940 size 0x11dc virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList> GetNextCloudStorageMetadataListPage(::Oculus::Platform::Models::CloudStorageMetadataList list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::CloudStorage);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CloudStorage, "Oculus.Platform", "CloudStorage");
