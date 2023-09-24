#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectIDGenerator;
}
// Type: System.Runtime.Serialization::ObjectIDGenerator
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3212))
// CS Name: System.Runtime.Serialization.ObjectIDGenerator
class CORDL_TYPE ObjectIDGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ObjectIDGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectIDGenerator", modifiers: " const&", def_value: None }]
constexpr ObjectIDGenerator(ObjectIDGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectIDGenerator", modifiers: "&&", def_value: None }]
constexpr ObjectIDGenerator(ObjectIDGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectIDGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectIDGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectIDGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectIDGenerator& operator=(ObjectIDGenerator&& o) noexcept = default;
  constexpr ObjectIDGenerator& operator=(ObjectIDGenerator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_currentCount, put=__set_m_currentCount))  m_currentCount;

constexpr void __set_m_currentCount(int32_t value) ;

constexpr int32_t __get_m_currentCount() const;

 int32_t __declspec(property(get=__get_m_currentSize, put=__set_m_currentSize))  m_currentSize;

constexpr void __set_m_currentSize(int32_t value) ;

constexpr int32_t __get_m_currentSize() const;

 ::ArrayW<int64_t> __declspec(property(get=__get_m_ids, put=__set_m_ids))  m_ids;

constexpr void __set_m_ids(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get_m_ids() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_objs, put=__set_m_objs))  m_objs;

constexpr void __set_m_objs(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_objs() const;

static ::ArrayW<int32_t> __declspec(property(get=__get_sizes, put=__set_sizes))  sizes;

static void __set_sizes(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_sizes() ;


// Methods

static System::Runtime::Serialization::ObjectIDGenerator New_ctor() ;

/// @brief Method .ctor addr 0x234c2a8 size 0xd8 virtual false final false
 void _ctor() ;

/// @brief Method FindElement addr 0x234c380 size 0xc4 virtual false final false
 int32_t FindElement(::bs_hook::Il2CppWrapperType obj, ByRef<bool> found) ;

/// @brief Method GetId addr 0x234c444 size 0x184 virtual true final false
 int64_t GetId(::bs_hook::Il2CppWrapperType obj, ByRef<bool> firstTime) ;

/// @brief Method HasId addr 0x234c87c size 0xd4 virtual true final false
 int64_t HasId(::bs_hook::Il2CppWrapperType obj, ByRef<bool> firstTime) ;

/// @brief Method Rehash addr 0x234c5c8 size 0x2b4 virtual false final false
 void Rehash() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::ObjectIDGenerator);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ObjectIDGenerator, "System.Runtime.Serialization", "ObjectIDGenerator");
