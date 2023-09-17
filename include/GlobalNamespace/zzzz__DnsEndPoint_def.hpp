#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Net {
class IPEndPoint;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace BGNet::Core {
class ITaskUtility;
}
// Forward declare root types
namespace GlobalNamespace {
class DnsEndPoint;
}
// Type: ::DnsEndPoint
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12664))
// CS Name: DnsEndPoint
class CORDL_TYPE DnsEndPoint : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::GlobalNamespace::DnsEndPoint>
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::DnsEndPoint>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DnsEndPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "DnsEndPoint", modifiers: " const&", def_value: None }]
constexpr DnsEndPoint(DnsEndPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DnsEndPoint", modifiers: "&&", def_value: None }]
constexpr DnsEndPoint(DnsEndPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DnsEndPoint(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DnsEndPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DnsEndPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DnsEndPoint& operator=(DnsEndPoint&& o) noexcept = default;
  constexpr DnsEndPoint& operator=(DnsEndPoint const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_hostName, put=__set_hostName))  hostName;

constexpr void __set_hostName(::StringW value) ;

constexpr ::StringW __get_hostName() const;

 int32_t __declspec(property(get=__get_port, put=__set_port))  port;

constexpr void __set_port(int32_t value) ;

constexpr int32_t __get_port() const;

 ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint> __declspec(property(get=__get__getEndPointTask, put=__set__getEndPointTask))  _getEndPointTask;

constexpr void __set__getEndPointTask(::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint> value) ;

constexpr ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint> __get__getEndPointTask() const;


// Properties

 ::System::Net::IPEndPoint __declspec(property(get=get_endPoint))  endPoint;


// Methods

/// @brief Method get_endPoint addr 0xda6c68 size 0x74 virtual false final false
 ::System::Net::IPEndPoint get_endPoint() ;

// Ctor Parameters [CppParam { name: "hostName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }]
explicit DnsEndPoint(::StringW hostName, int32_t port) ;

/// @brief Method .ctor addr 0xda5af8 size 0x30 virtual false final false
 void _ctor(::StringW hostName, int32_t port) ;

// Ctor Parameters [CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint", modifiers: "", def_value: None }]
explicit DnsEndPoint(::System::Net::IPEndPoint endPoint) ;

/// @brief Method .ctor addr 0xda6cdc size 0xb4 virtual false final false
 void _ctor(::System::Net::IPEndPoint endPoint) ;

/// @brief Method GetEndPointAsync addr 0xda6d90 size 0x120 virtual false final false
 ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint> GetEndPointAsync(::BGNet::Core::ITaskUtility taskUtility) ;

/// @brief Method GetEndPoint addr 0xda6eb0 size 0x94 virtual false final false
 ::System::Net::IPEndPoint GetEndPoint() ;

/// @brief Method GetEndPointInternal addr 0xda6f44 size 0xb0 virtual false final false
 ::System::Net::IPEndPoint GetEndPointInternal() ;

/// @brief Method ToString addr 0xda6ff4 size 0x8c virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0xda7080 size 0xa0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xda7120 size 0x4c virtual true final true
 bool Equals(::GlobalNamespace::DnsEndPoint other) ;

/// @brief Method GetHashCode addr 0xda716c size 0x2c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DnsEndPoint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DnsEndPoint, "", "DnsEndPoint");
