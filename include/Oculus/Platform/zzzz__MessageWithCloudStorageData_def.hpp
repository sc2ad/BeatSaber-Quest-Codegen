#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageData_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class CloudStorageData;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCloudStorageData;
}
// Type: Oculus.Platform::MessageWithCloudStorageData
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13406)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4441 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13229))
// CS Name: Oculus.Platform.MessageWithCloudStorageData
class CORDL_TYPE MessageWithCloudStorageData : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CloudStorageData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithCloudStorageData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageData", modifiers: " const&", def_value: None }]
constexpr MessageWithCloudStorageData(MessageWithCloudStorageData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageData", modifiers: "&&", def_value: None }]
constexpr MessageWithCloudStorageData(MessageWithCloudStorageData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithCloudStorageData(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CloudStorageData>(ptr) {
}


  constexpr MessageWithCloudStorageData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithCloudStorageData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithCloudStorageData& operator=(MessageWithCloudStorageData&& o) noexcept = default;
  constexpr MessageWithCloudStorageData& operator=(MessageWithCloudStorageData const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithCloudStorageData(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e428 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetCloudStorageData addr 0x2580d68 size 0x3c virtual true final false
 ::Oculus::Platform::Models::CloudStorageData GetCloudStorageData() ;

/// @brief Method GetDataFromMessage addr 0x2580da4 size 0x9c virtual true final false
 ::Oculus::Platform::Models::CloudStorageData GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithCloudStorageData);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCloudStorageData, "Oculus.Platform", "MessageWithCloudStorageData");
