#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct ByteEnum;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct Int32Enum;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class Action_5;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerSessionManager__MessageType;
}
namespace GlobalNamespace {
template<typename TType,typename TData>
class NetworkPacketSerializer_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TType,typename T>
class GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1;
}
namespace GlobalNamespace {
template<typename TType,typename T,typename T0>
class GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2;
}
namespace GlobalNamespace {
template<typename TType,typename T,typename T0,typename T1>
class GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3;
}
namespace GlobalNamespace {
template<typename TType,typename T,typename T0,typename T1,typename T2>
class GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4;
}
namespace GlobalNamespace {
template<typename TType,typename T,typename T0,typename T1>
class GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3;
}
namespace GlobalNamespace {
template<typename TType,typename T>
class GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1;
}
namespace GlobalNamespace {
template<typename TType>
class RpcHandler_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1<System::ByteEnum,T>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2<System::ByteEnum,T,GlobalNamespace::SongPackMask>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2<System::ByteEnum,T,System::Int32Enum>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2<System::ByteEnum,T,float_t>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type T0>
class GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2<System::ByteEnum,T,T0>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2<System::ByteEnum,T,bool>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type T0>
class GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3<System::ByteEnum,T,T0,int32_t>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
class GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3<System::ByteEnum,T,T0,T1>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4<System::ByteEnum,T,T0,T1,T2>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
class GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4<System::ByteEnum,T,T0,T1,float_t>;
}
namespace GlobalNamespace {
template<typename TType,typename T,typename T0,typename T1,typename T2,typename T3>
class GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5;
}
namespace GlobalNamespace {
template<typename TType,typename T>
class GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1;
}
namespace GlobalNamespace {
template<typename TType,typename T,typename T0>
class GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type T1>
class GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3<System::ByteEnum,T,float_t,T1>;
}
namespace GlobalNamespace {
template<typename TType,typename T,typename T0,typename T1,typename T2>
class GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4;
}
namespace GlobalNamespace {
template<typename TType,typename T,typename T0,typename T1,typename T2,typename T3>
class GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1<System::ByteEnum,T>;
}
namespace GlobalNamespace {
template<>
class RpcHandler_1<System::ByteEnum>;
}
// Type: ::<>c__DisplayClass10_0`1
// Type: ::<>c__DisplayClass11_0`2
// Type: ::<>c__DisplayClass12_0`3
// Type: ::<>c__DisplayClass13_0`4
// Type: ::<>c__DisplayClass14_0`5
namespace GlobalNamespace {
// cpp template
template<typename TType,typename T,typename T0,typename T1,typename T2,typename T3>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12885))
// CS Name: RpcHandler`1::<>c__DisplayClass14_0`5
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5(GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5(GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5 const& o) noexcept = default;
                


// Fields

 System::Action_5<::StringW,T0,T1,T2,T3> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_5<::StringW,T0,T1,T2,T3> value) ;

constexpr System::Action_5<::StringW,T0,T1,T2,T3> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallback_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass15_0`1
namespace GlobalNamespace {
// cpp template
template<typename TType,typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12886))
// CS Name: RpcHandler`1::<>c__DisplayClass15_0`1
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1(GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1(GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1 const& o) noexcept = default;
                


// Fields

 System::Action_2<::StringW,float_t> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_2<::StringW,float_t> value) ;

constexpr System::Action_2<::StringW,float_t> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallbackWithTime>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallbackWithTime_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass16_0`2
namespace GlobalNamespace {
// cpp template
template<typename TType,typename T,typename T0>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12887))
// CS Name: RpcHandler`1::<>c__DisplayClass16_0`2
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2(GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2(GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2 const& o) noexcept = default;
                


// Fields

 System::Action_3<::StringW,float_t,T0> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_3<::StringW,float_t,T0> value) ;

constexpr System::Action_3<::StringW,float_t,T0> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallbackWithTime>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallbackWithTime_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass17_0`3
// Type: ::<>c__DisplayClass18_0`4
namespace GlobalNamespace {
// cpp template
template<typename TType,typename T,typename T0,typename T1,typename T2>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12889))
// CS Name: RpcHandler`1::<>c__DisplayClass18_0`4
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4(GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4(GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4 const& o) noexcept = default;
                


// Fields

 System::Action_5<::StringW,float_t,T0,T1,T2> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_5<::StringW,float_t,T0,T1,T2> value) ;

constexpr System::Action_5<::StringW,float_t,T0,T1,T2> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallbackWithTime>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallbackWithTime_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass19_0`5
namespace GlobalNamespace {
// cpp template
template<typename TType,typename T,typename T0,typename T1,typename T2,typename T3>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12890))
// CS Name: RpcHandler`1::<>c__DisplayClass19_0`5
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5(GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5(GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5 const& o) noexcept = default;
                


// Fields

 System::Action_6<::StringW,float_t,T0,T1,T2,T3> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_6<::StringW,float_t,T0,T1,T2,T3> value) ;

constexpr System::Action_6<::StringW,float_t,T0,T1,T2,T3> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallbackWithTime>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallbackWithTime_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass20_0`1
// Type: ::RpcHandler`1
// Type: ::<>c__DisplayClass10_0`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12881))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12881), inst: 5944 })
// CS Name: RpcHandler`1::<>c__DisplayClass10_0`1
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1<System::ByteEnum,T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1(GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1(GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1 const& o) noexcept = default;
                


// Fields

 System::Action_1<::StringW> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallback_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass11_0`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12882))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12882), inst: 5943 })
// CS Name: RpcHandler`1::<>c__DisplayClass11_0`2
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2<System::ByteEnum,T,T0> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2 const& o) noexcept = default;
                


// Fields

 System::Action_2<::StringW,T0> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_2<::StringW,T0> value) ;

constexpr System::Action_2<::StringW,T0> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallback_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass11_0`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12882))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12882), inst: 5945 })
// CS Name: RpcHandler`1::<>c__DisplayClass11_0`2
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2<System::ByteEnum,T,bool> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2 const& o) noexcept = default;
                


// Fields

 System::Action_2<::StringW,bool> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_2<::StringW,bool> value) ;

constexpr System::Action_2<::StringW,bool> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallback_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass11_0`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12882))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12882), inst: 5946 })
// CS Name: RpcHandler`1::<>c__DisplayClass11_0`2
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2<System::ByteEnum,T,System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2 const& o) noexcept = default;
                


// Fields

 System::Action_2<::StringW,System::Int32Enum> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_2<::StringW,System::Int32Enum> value) ;

constexpr System::Action_2<::StringW,System::Int32Enum> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallback_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass11_0`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12882))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12882), inst: 5947 })
// CS Name: RpcHandler`1::<>c__DisplayClass11_0`2
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2<System::ByteEnum,T,float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2 const& o) noexcept = default;
                


// Fields

 System::Action_2<::StringW,float_t> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_2<::StringW,float_t> value) ;

constexpr System::Action_2<::StringW,float_t> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallback_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass11_0`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12882))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12882), inst: 5948 })
// CS Name: RpcHandler`1::<>c__DisplayClass11_0`2
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2<System::ByteEnum,T,GlobalNamespace::SongPackMask> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2 const& o) noexcept = default;
                


// Fields

 System::Action_2<::StringW,GlobalNamespace::SongPackMask> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_2<::StringW,GlobalNamespace::SongPackMask> value) ;

constexpr System::Action_2<::StringW,GlobalNamespace::SongPackMask> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallback_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass12_0`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12883))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12883), inst: 5949 })
// CS Name: RpcHandler`1::<>c__DisplayClass12_0`3
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3<System::ByteEnum,T,T0,int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3(GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3(GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3 const& o) noexcept = default;
                


// Fields

 System::Action_3<::StringW,T0,int32_t> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_3<::StringW,T0,int32_t> value) ;

constexpr System::Action_3<::StringW,T0,int32_t> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallback_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass12_0`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12883))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12883), inst: 5950 })
// CS Name: RpcHandler`1::<>c__DisplayClass12_0`3
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3<System::ByteEnum,T,T0,T1> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3(GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3(GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3 const& o) noexcept = default;
                


// Fields

 System::Action_3<::StringW,T0,T1> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_3<::StringW,T0,T1> value) ;

constexpr System::Action_3<::StringW,T0,T1> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallback_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass13_0`4
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12884))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12884), inst: 5951 })
// CS Name: RpcHandler`1::<>c__DisplayClass13_0`4
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4<System::ByteEnum,T,T0,T1,T2> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4(GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4(GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4 const& o) noexcept = default;
                


// Fields

 System::Action_4<::StringW,T0,T1,T2> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_4<::StringW,T0,T1,T2> value) ;

constexpr System::Action_4<::StringW,T0,T1,T2> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallback_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass13_0`4
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type T0,::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12884))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12884), inst: 5952 })
// CS Name: RpcHandler`1::<>c__DisplayClass13_0`4
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4<System::ByteEnum,T,T0,T1,float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4(GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4(GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4 const& o) noexcept = default;
                


// Fields

 System::Action_4<::StringW,T0,T1,float_t> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_4<::StringW,T0,T1,float_t> value) ;

constexpr System::Action_4<::StringW,T0,T1,float_t> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallback_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass17_0`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12888))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12888), inst: 5953 })
// CS Name: RpcHandler`1::<>c__DisplayClass17_0`3
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3<System::ByteEnum,T,float_t,T1> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3(GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3(GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3 const& o) noexcept = default;
                


// Fields

 System::Action_4<::StringW,float_t,float_t,T1> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_4<::StringW,float_t,float_t,T1> value) ;

constexpr System::Action_4<::StringW,float_t,float_t,T1> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallbackWithTime>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallbackWithTime_b__0(GlobalNamespace::IConnectedPlayer player, T rpc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass20_0`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12891))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12891), inst: 5944 })
// CS Name: RpcHandler`1::<>c__DisplayClass20_0`1
class CORDL_TYPE GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1<System::ByteEnum,T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1(GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1(GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1&& o) noexcept = default;
  constexpr GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1& operator=(GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1 const& o) noexcept = default;
                


// Fields

 System::Action_2<GlobalNamespace::IConnectedPlayer,T> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_2<GlobalNamespace::IConnectedPlayer,T> value) ;

constexpr System::Action_2<GlobalNamespace::IConnectedPlayer,T> __get_callback() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterCallback>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _RegisterCallback_b__0(T rpc, GlobalNamespace::IConnectedPlayer player) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RpcHandler`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12892))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12892), inst: 6976 })
// CS Name: RpcHandler`1
class CORDL_TYPE RpcHandler_1<System::ByteEnum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using __c__DisplayClass20_0_1 = GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1<System::ByteEnum, TType, T>;

template<typename T,typename T0,typename T1,typename T2,typename T3>
using __c__DisplayClass19_0_5 = GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5<System::ByteEnum, TType, T, T0, T1, T2, T3>;

template<typename T,typename T0,typename T1,typename T2>
using __c__DisplayClass18_0_4 = GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4<System::ByteEnum, TType, T, T0, T1, T2>;

template<typename T,typename T0,typename T1>
using __c__DisplayClass17_0_3 = GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3<System::ByteEnum, TType, T, T0, T1>;

template<typename T,typename T0>
using __c__DisplayClass16_0_2 = GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2<System::ByteEnum, TType, T, T0>;

template<typename T>
using __c__DisplayClass15_0_1 = GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1<System::ByteEnum, TType, T>;

template<typename T,typename T0,typename T1,typename T2,typename T3>
using __c__DisplayClass14_0_5 = GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5<System::ByteEnum, TType, T, T0, T1, T2, T3>;

template<typename T,typename T0,typename T1,typename T2>
using __c__DisplayClass13_0_4 = GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4<System::ByteEnum, TType, T, T0, T1, T2>;

template<typename T,typename T0,typename T1>
using __c__DisplayClass12_0_3 = GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3<System::ByteEnum, TType, T, T0, T1>;

template<typename T,typename T0>
using __c__DisplayClass11_0_2 = GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2<System::ByteEnum, TType, T, T0>;

template<typename T>
using __c__DisplayClass10_0_1 = GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1<System::ByteEnum, TType, T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RpcHandler_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1", modifiers: " const&", def_value: None }]
constexpr RpcHandler_1(RpcHandler_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RpcHandler_1", modifiers: "&&", def_value: None }]
constexpr RpcHandler_1(RpcHandler_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RpcHandler_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RpcHandler_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RpcHandler_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RpcHandler_1& operator=(RpcHandler_1&& o) noexcept = default;
  constexpr RpcHandler_1& operator=(RpcHandler_1 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType __declspec(property(get=__get__messageType, put=__set__messageType))  _messageType;

constexpr void __set__messageType(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType __get__messageType() const;

 GlobalNamespace::NetworkPacketSerializer_2<System::ByteEnum,GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get__rpcSerializer, put=__set__rpcSerializer))  _rpcSerializer;

constexpr void __set__rpcSerializer(GlobalNamespace::NetworkPacketSerializer_2<System::ByteEnum,GlobalNamespace::IConnectedPlayer> value) ;

constexpr GlobalNamespace::NetworkPacketSerializer_2<System::ByteEnum,GlobalNamespace::IConnectedPlayer> __get__rpcSerializer() const;


// Methods

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }, CppParam { name: "messageType", ty: "GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType", modifiers: "", def_value: None }]
explicit RpcHandler_1(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType messageType) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType messageType) ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual false final false
 void Destroy() ;

/// @brief Method EnqueueRpc addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void EnqueueRpc() ;

/// @brief Method EnqueueRpc addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename T0>
 void EnqueueRpc(T0 value0) ;

/// @brief Method EnqueueRpc addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename T0,typename T1>
 void EnqueueRpc(T0 value0, T1 value1) ;

/// @brief Method EnqueueRpc addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename T0,typename T1,typename T2>
 void EnqueueRpc(T0 value0, T1 value1, T2 value2) ;

/// @brief Method EnqueueRpc addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename T0,typename T1,typename T2,typename T3>
 void EnqueueRpc(T0 value0, T1 value1, T2 value2, T3 value3) ;

/// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void RegisterCallback(System::ByteEnum type, System::Action_1<::StringW> callback) ;

/// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename T0>
 void RegisterCallback(System::ByteEnum type, System::Action_2<::StringW,T0> callback) ;

/// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename T0,typename T1>
 void RegisterCallback(System::ByteEnum type, System::Action_3<::StringW,T0,T1> callback) ;

/// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename T0,typename T1,typename T2>
 void RegisterCallback(System::ByteEnum type, System::Action_4<::StringW,T0,T1,T2> callback) ;

/// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename T0,typename T1,typename T2,typename T3>
 void RegisterCallback(System::ByteEnum type, System::Action_5<::StringW,T0,T1,T2,T3> callback) ;

/// @brief Method RegisterCallbackWithTime addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void RegisterCallbackWithTime(System::ByteEnum type, System::Action_2<::StringW,float_t> callback) ;

/// @brief Method RegisterCallbackWithTime addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename T0>
 void RegisterCallbackWithTime(System::ByteEnum type, System::Action_3<::StringW,float_t,T0> callback) ;

/// @brief Method RegisterCallbackWithTime addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename T0,typename T1>
 void RegisterCallbackWithTime(System::ByteEnum type, System::Action_4<::StringW,float_t,T0,T1> callback) ;

/// @brief Method RegisterCallbackWithTime addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename T0,typename T1,typename T2>
 void RegisterCallbackWithTime(System::ByteEnum type, System::Action_5<::StringW,float_t,T0,T1,T2> callback) ;

/// @brief Method RegisterCallbackWithTime addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename T0,typename T1,typename T2,typename T3>
 void RegisterCallbackWithTime(System::ByteEnum type, System::Action_6<::StringW,float_t,T0,T1,T2,T3> callback) ;

/// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void RegisterCallback(System::ByteEnum type, System::Action_2<GlobalNamespace::IConnectedPlayer,T> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass10_0_1, "", "RpcHandler`1/<>c__DisplayClass10_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass11_0_2, "", "RpcHandler`1/<>c__DisplayClass11_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass12_0_3, "", "RpcHandler`1/<>c__DisplayClass12_0`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass13_0_4, "", "RpcHandler`1/<>c__DisplayClass13_0`4");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass17_0_3, "", "RpcHandler`1/<>c__DisplayClass17_0`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass20_0_1, "", "RpcHandler`1/<>c__DisplayClass20_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RpcHandler_1, "", "RpcHandler`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass14_0_5, "", "RpcHandler`1/<>c__DisplayClass14_0`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass15_0_1, "", "RpcHandler`1/<>c__DisplayClass15_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass16_0_2, "", "RpcHandler`1/<>c__DisplayClass16_0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass18_0_4, "", "RpcHandler`1/<>c__DisplayClass18_0`4");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__RpcHandler_1____c__DisplayClass19_0_5, "", "RpcHandler`1/<>c__DisplayClass19_0`5");
