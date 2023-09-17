#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security {
class ISecurityEncodable;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Security {
class SecurityElement;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Security {
class IPermission;
}
namespace System::Collections {
class ICollection;
}
namespace System::Security::Permissions {
struct PermissionState;
}
// Forward declare root types
namespace System::Security {
class PermissionSet;
}
// Type: System.Security::PermissionSet
namespace System::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2880))
// CS Name: System.Security.PermissionSet
class CORDL_TYPE PermissionSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Security::ISecurityEncodable
constexpr operator  ::System::Security::ISecurityEncodable() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PermissionSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "PermissionSet", modifiers: " const&", def_value: None }]
constexpr PermissionSet(PermissionSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PermissionSet", modifiers: "&&", def_value: None }]
constexpr PermissionSet(PermissionSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PermissionSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PermissionSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PermissionSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PermissionSet& operator=(PermissionSet&& o) noexcept = default;
  constexpr PermissionSet& operator=(PermissionSet const& o) noexcept = default;
                


// Fields

static ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_psUnrestricted, put=__set_psUnrestricted))  psUnrestricted;

static void __set_psUnrestricted(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

static ::ArrayW<::bs_hook::Il2CppWrapperType> __get_psUnrestricted() ;

 ::System::Security::Permissions::PermissionState __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::System::Security::Permissions::PermissionState value) ;

constexpr ::System::Security::Permissions::PermissionState __get_state() const;

 ::System::Collections::ArrayList __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get_list() const;

 bool __declspec(property(get=__get__declsec, put=__set__declsec))  _declsec;

constexpr void __set__declsec(bool value) ;

constexpr bool __get__declsec() const;

 ::ArrayW<bool> __declspec(property(get=__get__ignored, put=__set__ignored))  _ignored;

constexpr void __set__ignored(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get__ignored() const;

static ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_action, put=__set_action))  action;

static void __set_action(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

static ::ArrayW<::bs_hook::Il2CppWrapperType> __get_action() ;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

// Ctor Parameters []
explicit PermissionSet() ;

/// @brief Method .ctor addr 0x22e5450 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "state", ty: "::System::Security::Permissions::PermissionState", modifiers: "", def_value: None }]
explicit PermissionSet(::System::Security::Permissions::PermissionState state) ;

/// @brief Method .ctor addr 0x22e553c size 0x30 virtual false final false
 void _ctor(::System::Security::Permissions::PermissionState state) ;

// Ctor Parameters [CppParam { name: "perm", ty: "::System::Security::IPermission", modifiers: "", def_value: None }]
explicit PermissionSet(::System::Security::IPermission perm) ;

/// @brief Method .ctor addr 0x22e4f24 size 0x4c virtual false final false
 void _ctor(::System::Security::IPermission perm) ;

/// @brief Method CopyTo addr 0x22e5dd8 size 0x178 virtual true final false
 void CopyTo(::System::Array array, int32_t index) ;

/// @brief Method Demand addr 0x22e5f50 size 0x228 virtual true final true
 void Demand() ;

/// @brief Method CasOnlyDemand addr 0x22e4f70 size 0x78 virtual false final false
 void CasOnlyDemand(int32_t skip) ;

/// @brief Method GetEnumerator addr 0x22e6528 size 0x24 virtual true final true
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method IsEmpty addr 0x22e6178 size 0x3a0 virtual false final false
 bool IsEmpty() ;

/// @brief Method IsUnrestricted addr 0x22e6518 size 0x10 virtual false final false
 bool IsUnrestricted() ;

/// @brief Method ToString addr 0x22e654c size 0x2c virtual true final false
 ::StringW ToString() ;

/// @brief Method ToXml addr 0x22e56d4 size 0x45c virtual true final false
 ::System::Security::SecurityElement ToXml() ;

/// @brief Method get_Count addr 0x22e6578 size 0x24 virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsSynchronized addr 0x22e659c size 0x24 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x22e65c0 size 0x4 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x22e65c4 size 0x4 virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method Equals addr 0x22e5bc0 size 0x19c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x22e5d94 size 0x44 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security
} // end anonymous namespace
NEED_NO_BOX(::System::Security::PermissionSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::PermissionSet, "System.Security", "PermissionSet");
