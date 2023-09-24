#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include <cmath>
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__RemoteProcedureCall__TypeWrapper_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T0,typename T1,typename T2,typename T3>
class RemoteProcedureCall_4;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
class RemoteProcedureCall_4<T0,T1,T2,T3>;
}
// Type: ::RemoteProcedureCall`4
// Type: ::RemoteProcedureCall`4
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875)), TypeDefinitionIndex(TypeDefinitionIndex(12879))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12879), inst: 5937 })
// CS Name: RemoteProcedureCall`4
class CORDL_TYPE RemoteProcedureCall_4<T0,T1,T2,T3> : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~RemoteProcedureCall_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_4", modifiers: " const&", def_value: None }]
constexpr RemoteProcedureCall_4(RemoteProcedureCall_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_4", modifiers: "&&", def_value: None }]
constexpr RemoteProcedureCall_4(RemoteProcedureCall_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteProcedureCall_4(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr RemoteProcedureCall_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteProcedureCall_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteProcedureCall_4& operator=(RemoteProcedureCall_4&& o) noexcept = default;
  constexpr RemoteProcedureCall_4& operator=(RemoteProcedureCall_4 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> __declspec(property(get=__get__value0, put=__set__value0))  _value0;

constexpr void __set__value0(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T0> __get__value0() const;

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> __declspec(property(get=__get__value1, put=__set__value1))  _value1;

constexpr void __set__value1(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T1> __get__value1() const;

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T2> __declspec(property(get=__get__value2, put=__set__value2))  _value2;

constexpr void __set__value2(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T2> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T2> __get__value2() const;

 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T3> __declspec(property(get=__get__value3, put=__set__value3))  _value3;

constexpr void __set__value3(GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T3> value) ;

constexpr GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T3> __get__value3() const;


// Properties

 T0 __declspec(property(get=get_value0))  value0;

 T1 __declspec(property(get=get_value1))  value1;

 T2 __declspec(property(get=get_value2))  value2;

 T3 __declspec(property(get=get_value3))  value3;


// Methods

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
 T0 get_value0() ;

/// @brief Method get_value1 addr 0x0 size 0xffffffffffffffff virtual false final false
 T1 get_value1() ;

/// @brief Method get_value2 addr 0x0 size 0xffffffffffffffff virtual false final false
 T2 get_value2() ;

/// @brief Method get_value3 addr 0x0 size 0xffffffffffffffff virtual false final false
 T3 get_value3() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
 void DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::IRemoteProcedureCall Init(float_t syncTime, T0 value0, T1 value1, T2 value2, T3 value3) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

static GlobalNamespace::RemoteProcedureCall_4<T0,T1,T2,T3> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RemoteProcedureCall_4, "", "RemoteProcedureCall`4");
