#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class CrossAppDomainData;
}
// Type: System.Runtime.Remoting.Channels::CrossAppDomainData
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3111))
// CS Name: System.Runtime.Remoting.Channels.CrossAppDomainData
class CORDL_TYPE CrossAppDomainData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CrossAppDomainData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainData", modifiers: " const&", def_value: None }]
constexpr CrossAppDomainData(CrossAppDomainData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainData", modifiers: "&&", def_value: None }]
constexpr CrossAppDomainData(CrossAppDomainData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrossAppDomainData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CrossAppDomainData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrossAppDomainData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrossAppDomainData& operator=(CrossAppDomainData&& o) noexcept = default;
  constexpr CrossAppDomainData& operator=(CrossAppDomainData const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__ContextID, put=__set__ContextID))  _ContextID;

constexpr void __set__ContextID(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__ContextID() const;

 int32_t __declspec(property(get=__get__DomainID, put=__set__DomainID))  _DomainID;

constexpr void __set__DomainID(int32_t value) ;

constexpr int32_t __get__DomainID() const;

 ::StringW __declspec(property(get=__get__processGuid, put=__set__processGuid))  _processGuid;

constexpr void __set__processGuid(::StringW value) ;

constexpr ::StringW __get__processGuid() const;


// Properties

 int32_t __declspec(property(get=get_DomainID))  DomainID;

 ::StringW __declspec(property(get=get_ProcessID))  ProcessID;


// Methods

static System::Runtime::Remoting::Channels::CrossAppDomainData New_ctor(int32_t domainId) ;

/// @brief Method .ctor addr 0x23368b4 size 0xa8 virtual false final false
 void _ctor(int32_t domainId) ;

/// @brief Method get_DomainID addr 0x233695c size 0x8 virtual false final false
 int32_t get_DomainID() ;

/// @brief Method get_ProcessID addr 0x2336964 size 0x8 virtual false final false
 ::StringW get_ProcessID() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
NEED_NO_BOX(System::Runtime::Remoting::Channels::CrossAppDomainData);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::CrossAppDomainData, "System.Runtime.Remoting.Channels", "CrossAppDomainData");
