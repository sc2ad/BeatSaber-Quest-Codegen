#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationEvents;
}
namespace System {
class Type;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationEventsCache;
}
namespace System::Runtime::Serialization {
class ____System__Runtime__Serialization__SerializationEventsCache____c;
}
// Type: ::<>c
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3204))
// CS Name: System.Runtime.Serialization.SerializationEventsCache::<>c
class CORDL_TYPE ____System__Runtime__Serialization__SerializationEventsCache____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Runtime__Serialization__SerializationEventsCache____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Runtime__Serialization__SerializationEventsCache____c", modifiers: " const&", def_value: None }]
constexpr ____System__Runtime__Serialization__SerializationEventsCache____c(____System__Runtime__Serialization__SerializationEventsCache____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Runtime__Serialization__SerializationEventsCache____c", modifiers: "&&", def_value: None }]
constexpr ____System__Runtime__Serialization__SerializationEventsCache____c(____System__Runtime__Serialization__SerializationEventsCache____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Runtime__Serialization__SerializationEventsCache____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Runtime__Serialization__SerializationEventsCache____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Runtime__Serialization__SerializationEventsCache____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Runtime__Serialization__SerializationEventsCache____c& operator=(____System__Runtime__Serialization__SerializationEventsCache____c&& o) noexcept = default;
  constexpr ____System__Runtime__Serialization__SerializationEventsCache____c& operator=(____System__Runtime__Serialization__SerializationEventsCache____c const& o) noexcept = default;
                


// Fields

static ::System::Runtime::Serialization::____System__Runtime__Serialization__SerializationEventsCache____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::System::Runtime::Serialization::____System__Runtime__Serialization__SerializationEventsCache____c value) ;

static ::System::Runtime::Serialization::____System__Runtime__Serialization__SerializationEventsCache____c __get___9() ;

static ::System::Func_2<::System::Type,::System::Runtime::Serialization::SerializationEvents> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(::System::Func_2<::System::Type,::System::Runtime::Serialization::SerializationEvents> value) ;

static ::System::Func_2<::System::Type,::System::Runtime::Serialization::SerializationEvents> __get___9__1_0() ;


// Methods

// Ctor Parameters []
explicit ____System__Runtime__Serialization__SerializationEventsCache____c() ;

/// @brief Method .ctor addr 0x23496ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetSerializationEventsForType>b__1_0 addr 0x23496b4 size 0x60 virtual false final false
 ::System::Runtime::Serialization::SerializationEvents _GetSerializationEventsForType_b__1_0(::System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
// Type: System.Runtime.Serialization::SerializationEventsCache
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3205))
// CS Name: System.Runtime.Serialization.SerializationEventsCache
class CORDL_TYPE SerializationEventsCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::System::Runtime::Serialization::____System__Runtime__Serialization__SerializationEventsCache____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SerializationEventsCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationEventsCache", modifiers: " const&", def_value: None }]
constexpr SerializationEventsCache(SerializationEventsCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationEventsCache", modifiers: "&&", def_value: None }]
constexpr SerializationEventsCache(SerializationEventsCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationEventsCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerializationEventsCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationEventsCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationEventsCache& operator=(SerializationEventsCache&& o) noexcept = default;
  constexpr SerializationEventsCache& operator=(SerializationEventsCache const& o) noexcept = default;
                


// Fields

static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type,::System::Runtime::Serialization::SerializationEvents> __declspec(property(get=__get_s_cache, put=__set_s_cache))  s_cache;

static void __set_s_cache(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type,::System::Runtime::Serialization::SerializationEvents> value) ;

static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type,::System::Runtime::Serialization::SerializationEvents> __get_s_cache() ;


// Methods

/// @brief Method GetSerializationEventsForType addr 0x2349488 size 0x134 virtual false final false
static ::System::Runtime::Serialization::SerializationEvents GetSerializationEventsForType(::System::Type t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::SerializationEventsCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEventsCache, "System.Runtime.Serialization", "SerializationEventsCache");
NEED_NO_BOX(::System::Runtime::Serialization::____System__Runtime__Serialization__SerializationEventsCache____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::____System__Runtime__Serialization__SerializationEventsCache____c, "System.Runtime.Serialization", "SerializationEventsCache/<>c");
