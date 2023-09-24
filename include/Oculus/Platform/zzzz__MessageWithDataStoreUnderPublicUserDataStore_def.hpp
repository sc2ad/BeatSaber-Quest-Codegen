#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithDataStoreUnderPublicUserDataStore;
}
// Type: Oculus.Platform::MessageWithDataStoreUnderPublicUserDataStore
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3809)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3809), inst: 587 }), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4422 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13234))
// CS Name: Oculus.Platform.MessageWithDataStoreUnderPublicUserDataStore
class CORDL_TYPE MessageWithDataStoreUnderPublicUserDataStore : public Oculus::Platform::Message_1<System::Collections::Generic::Dictionary_2<::StringW,::StringW>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithDataStoreUnderPublicUserDataStore() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithDataStoreUnderPublicUserDataStore", modifiers: " const&", def_value: None }]
constexpr MessageWithDataStoreUnderPublicUserDataStore(MessageWithDataStoreUnderPublicUserDataStore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithDataStoreUnderPublicUserDataStore", modifiers: "&&", def_value: None }]
constexpr MessageWithDataStoreUnderPublicUserDataStore(MessageWithDataStoreUnderPublicUserDataStore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithDataStoreUnderPublicUserDataStore(void* ptr) noexcept : Oculus::Platform::Message_1<System::Collections::Generic::Dictionary_2<::StringW,::StringW>>(ptr) {
}


  constexpr MessageWithDataStoreUnderPublicUserDataStore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithDataStoreUnderPublicUserDataStore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithDataStoreUnderPublicUserDataStore& operator=(MessageWithDataStoreUnderPublicUserDataStore&& o) noexcept = default;
  constexpr MessageWithDataStoreUnderPublicUserDataStore& operator=(MessageWithDataStoreUnderPublicUserDataStore const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e5e0 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetDataStore addr 0x2581160 size 0x3c virtual true final false
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> GetDataStore() ;

/// @brief Method GetDataFromMessage addr 0x258119c size 0x5c virtual true final false
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore, "Oculus.Platform", "MessageWithDataStoreUnderPublicUserDataStore");
