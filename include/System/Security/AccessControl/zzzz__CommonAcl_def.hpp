#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__GenericAcl_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System::Security::AccessControl {
class RawAcl;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::AccessControl {
struct AuditFlags;
}
namespace System::Security::AccessControl {
class QualifiedAce;
}
namespace System::Security::AccessControl {
class GenericAce;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
namespace System {
struct Guid;
}
namespace System::Security::AccessControl {
class ObjectAce;
}
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
template<typename T>
class System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1;
}
namespace System::Security::AccessControl {
class CommonAcl;
}
namespace System::Security::AccessControl {
template<::cordl_internals::il2cpp_reference_type T>
class System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1<T>;
}
// Type: ::RemoveAcesCallback`1
// Type: System.Security.AccessControl::CommonAcl
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3032))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3021))
// CS Name: System.Security.AccessControl.CommonAcl
class CORDL_TYPE CommonAcl : public System::Security::AccessControl::GenericAcl {
public:
// Declarations
template<typename T>
using RemoveAcesCallback_1 = System::Security::AccessControl::System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CommonAcl() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommonAcl", modifiers: " const&", def_value: None }]
constexpr CommonAcl(CommonAcl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommonAcl", modifiers: "&&", def_value: None }]
constexpr CommonAcl(CommonAcl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommonAcl(void* ptr) noexcept : System::Security::AccessControl::GenericAcl(ptr) {
}


  constexpr CommonAcl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommonAcl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommonAcl& operator=(CommonAcl&& o) noexcept = default;
  constexpr CommonAcl& operator=(CommonAcl const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_is_aefa, put=__set_is_aefa))  is_aefa;

constexpr void __set_is_aefa(bool value) ;

constexpr bool __get_is_aefa() const;

 bool __declspec(property(get=__get_is_canonical, put=__set_is_canonical))  is_canonical;

constexpr void __set_is_canonical(bool value) ;

constexpr bool __get_is_canonical() const;

 bool __declspec(property(get=__get_is_container, put=__set_is_container))  is_container;

constexpr void __set_is_container(bool value) ;

constexpr bool __get_is_container() const;

 bool __declspec(property(get=__get_is_ds, put=__set_is_ds))  is_ds;

constexpr void __set_is_ds(bool value) ;

constexpr bool __get_is_ds() const;

 System::Security::AccessControl::RawAcl __declspec(property(get=__get_raw_acl, put=__set_raw_acl))  raw_acl;

constexpr void __set_raw_acl(System::Security::AccessControl::RawAcl value) ;

constexpr System::Security::AccessControl::RawAcl __get_raw_acl() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsCanonical))  IsCanonical;

 bool __declspec(property(get=get_IsContainer))  IsContainer;

 bool __declspec(property(get=get_IsDS))  IsDS;

 bool __declspec(property(put=set_IsAefa))  IsAefa;

 System::Security::AccessControl::GenericAce __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isDS", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "revision", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit CommonAcl(bool isContainer, bool isDS, uint8_t revision, int32_t capacity) ;

/// @brief Method .ctor addr 0x2315f4c size 0xc8 virtual false final false
 void _ctor(bool isContainer, bool isDS, uint8_t revision, int32_t capacity) ;

// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isDS", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit CommonAcl(bool isContainer, bool isDS, int32_t capacity) ;

/// @brief Method .ctor addr 0x23160f0 size 0x8c virtual false final false
 void _ctor(bool isContainer, bool isDS, int32_t capacity) ;

/// @brief Method Init addr 0x23160d8 size 0x18 virtual false final false
 void Init(bool isContainer, bool isDS, System::Security::AccessControl::RawAcl rawAcl) ;

/// @brief Method get_Count addr 0x2316240 size 0x20 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_IsCanonical addr 0x2316260 size 0x8 virtual false final false
 bool get_IsCanonical() ;

/// @brief Method get_IsContainer addr 0x2316268 size 0x8 virtual false final false
 bool get_IsContainer() ;

/// @brief Method get_IsDS addr 0x2316270 size 0x8 virtual false final false
 bool get_IsDS() ;

/// @brief Method set_IsAefa addr 0x2316278 size 0xc virtual false final false
 void set_IsAefa(bool value) ;

/// @brief Method get_Item addr 0x2316284 size 0x24 virtual true final true
 System::Security::AccessControl::GenericAce get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2316334 size 0x40 virtual true final true
 void set_Item(int32_t index, System::Security::AccessControl::GenericAce value) ;

/// @brief Method RequireCanonicity addr 0x2316374 size 0x60 virtual false final false
 void RequireCanonicity() ;

/// @brief Method CanonicalizeAndClearAefa addr 0x231617c size 0xc4 virtual false final false
 void CanonicalizeAndClearAefa() ;

/// @brief Method IsAceMeaningless addr 0x23166b8 size 0x100 virtual true final false
 bool IsAceMeaningless(System::Security::AccessControl::GenericAce ace) ;

/// @brief Method TestCanonicity addr 0x23163d4 size 0x1cc virtual false final false
 bool TestCanonicity() ;

/// @brief Method GetCanonicalExplicitDenyAceCount addr 0x2316a34 size 0x144 virtual false final false
 int32_t GetCanonicalExplicitDenyAceCount() ;

/// @brief Method GetCanonicalExplicitAceCount addr 0x2316cc0 size 0x80 virtual false final false
 int32_t GetCanonicalExplicitAceCount() ;

/// @brief Method MergeExplicitAces addr 0x23165a0 size 0x118 virtual false final false
 void MergeExplicitAces() ;

/// @brief Method MergeExplicitAcePair addr 0x2316d40 size 0x404 virtual false final false
 System::Security::AccessControl::GenericAce MergeExplicitAcePair(System::Security::AccessControl::GenericAce ace1, System::Security::AccessControl::GenericAce ace2) ;

/// @brief Method GetObjectAceTypeGuids addr 0x23171d8 size 0x98 virtual false final false
static void GetObjectAceTypeGuids(System::Security::AccessControl::ObjectAce ace, ByRef<System::Guid> type, ByRef<System::Guid> inheritedType) ;

/// @brief Method ApplyCanonicalSortToExplicitAces addr 0x0 size 0xffffffffffffffff virtual true final false
 void ApplyCanonicalSortToExplicitAces() ;

/// @brief Method ApplyCanonicalSortToExplicitAces addr 0x2317308 size 0x1c4 virtual false final false
 void ApplyCanonicalSortToExplicitAces(int32_t start, int32_t count) ;

/// @brief Method RemoveAces addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void RemoveAces(System::Security::AccessControl::System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1<T> callback) ;

/// @brief Method AddAce addr 0x23174cc size 0x1c virtual false final false
 void AddAce(System::Security::AccessControl::AceQualifier aceQualifier, System::Security::Principal::SecurityIdentifier sid, int32_t accessMask, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags, System::Security::AccessControl::AuditFlags auditFlags) ;

/// @brief Method AddAceGetQualifiedAce addr 0x23174e8 size 0xc0 virtual false final false
 System::Security::AccessControl::QualifiedAce AddAceGetQualifiedAce(System::Security::AccessControl::AceQualifier aceQualifier, System::Security::Principal::SecurityIdentifier sid, int32_t accessMask, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags, System::Security::AccessControl::AuditFlags auditFlags) ;

/// @brief Method AddAce addr 0x23175a8 size 0x78 virtual false final false
 void AddAce(System::Security::AccessControl::QualifiedAce newAce) ;

/// @brief Method CopyAce addr 0x23162a8 size 0x8c virtual false final false
static System::Security::AccessControl::GenericAce CopyAce(System::Security::AccessControl::GenericAce ace) ;

/// @brief Method GetAceInsertPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetAceInsertPosition(System::Security::AccessControl::AceQualifier aceQualifier) ;

/// @brief Method GetAceFlags addr 0x2317620 size 0xd8 virtual false final false
 System::Security::AccessControl::AceFlags GetAceFlags(System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags, System::Security::AccessControl::AuditFlags auditFlags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
// Type: ::RemoveAcesCallback`1
namespace System::Security::AccessControl {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(3020))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3020), inst: 2 })
// CS Name: System.Security.AccessControl.CommonAcl::RemoveAcesCallback`1
class CORDL_TYPE System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1<T> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1", modifiers: " const&", def_value: None }]
constexpr System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1(System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1", modifiers: "&&", def_value: None }]
constexpr System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1(System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1& operator=(System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1&& o) noexcept = default;
  constexpr System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1& operator=(System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(T ace) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Security::AccessControl::System__Security__AccessControl__CommonAcl__RemoveAcesCallback_1, "System.Security.AccessControl", "CommonAcl/RemoveAcesCallback`1");
NEED_NO_BOX(System::Security::AccessControl::CommonAcl);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::CommonAcl, "System.Security.AccessControl", "CommonAcl");
