#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Resources {
class IResourceReader;
}
namespace System::Resources {
class System__Resources__ResourceReader__ResourceEnumerator;
}
namespace System::IO {
class BinaryReader;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class IDisposable;
}
namespace System::Resources {
struct ResourceTypeCode;
}
namespace System {
class RuntimeType;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryFormatter;
}
namespace System::IO {
class Stream;
}
namespace System::Resources {
struct ResourceLocator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::IO {
class UnmanagedMemoryStream;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace System::Resources {
class ResourceReader;
}
namespace System::Resources {
class System__Resources__ResourceReader__ResourceEnumerator;
}
// Type: ::ResourceEnumerator
namespace System::Resources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3432))
// CS Name: System.Resources.ResourceReader::ResourceEnumerator
class CORDL_TYPE System__Resources__ResourceReader__ResourceEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr operator  System::Collections::IDictionaryEnumerator() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Resources__ResourceReader__ResourceEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Resources__ResourceReader__ResourceEnumerator", modifiers: " const&", def_value: None }]
constexpr System__Resources__ResourceReader__ResourceEnumerator(System__Resources__ResourceReader__ResourceEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Resources__ResourceReader__ResourceEnumerator", modifiers: "&&", def_value: None }]
constexpr System__Resources__ResourceReader__ResourceEnumerator(System__Resources__ResourceReader__ResourceEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Resources__ResourceReader__ResourceEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Resources__ResourceReader__ResourceEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Resources__ResourceReader__ResourceEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Resources__ResourceReader__ResourceEnumerator& operator=(System__Resources__ResourceReader__ResourceEnumerator&& o) noexcept = default;
  constexpr System__Resources__ResourceReader__ResourceEnumerator& operator=(System__Resources__ResourceReader__ResourceEnumerator const& o) noexcept = default;
                


// Fields

 System::Resources::ResourceReader __declspec(property(get=__get__reader, put=__set__reader))  _reader;

constexpr void __set__reader(System::Resources::ResourceReader value) ;

constexpr System::Resources::ResourceReader __get__reader() const;

 bool __declspec(property(get=__get__currentIsValid, put=__set__currentIsValid))  _currentIsValid;

constexpr void __set__currentIsValid(bool value) ;

constexpr bool __get__currentIsValid() const;

 int32_t __declspec(property(get=__get__currentName, put=__set__currentName))  _currentName;

constexpr void __set__currentName(int32_t value) ;

constexpr int32_t __get__currentName() const;

 int32_t __declspec(property(get=__get__dataPosition, put=__set__dataPosition))  _dataPosition;

constexpr void __set__dataPosition(int32_t value) ;

constexpr int32_t __get__dataPosition() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;

 int32_t __declspec(property(get=get_DataPosition))  DataPosition;

 System::Collections::DictionaryEntry __declspec(property(get=get_Entry))  Entry;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

static System::Resources::System__Resources__ResourceReader__ResourceEnumerator New_ctor(System::Resources::ResourceReader reader) ;

/// @brief Method .ctor addr 0x2374960 size 0x34 virtual false final false
 void _ctor(System::Resources::ResourceReader reader) ;

/// @brief Method MoveNext addr 0x2377cd0 size 0x5c virtual true final true
 bool MoveNext() ;

/// @brief Method get_Key addr 0x2377d2c size 0xb8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method get_Current addr 0x2377de4 size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method get_DataPosition addr 0x237818c size 0x8 virtual false final false
 int32_t get_DataPosition() ;

/// @brief Method get_Entry addr 0x2377e48 size 0x344 virtual true final true
 System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Value addr 0x2378194 size 0xb0 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method Reset addr 0x2378244 size 0x8c virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
// Type: System.Resources::ResourceReader
namespace System::Resources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3433))
// CS Name: System.Resources.ResourceReader
class CORDL_TYPE ResourceReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ResourceEnumerator = System::Resources::System__Resources__ResourceReader__ResourceEnumerator;

/// @brief Convert operator to System::Resources::IResourceReader
constexpr operator  System::Resources::IResourceReader() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ResourceReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceReader", modifiers: " const&", def_value: None }]
constexpr ResourceReader(ResourceReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceReader", modifiers: "&&", def_value: None }]
constexpr ResourceReader(ResourceReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourceReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceReader& operator=(ResourceReader&& o) noexcept = default;
  constexpr ResourceReader& operator=(ResourceReader const& o) noexcept = default;
                


// Fields

 System::IO::BinaryReader __declspec(property(get=__get__store, put=__set__store))  _store;

constexpr void __set__store(System::IO::BinaryReader value) ;

constexpr System::IO::BinaryReader __get__store() const;

 System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator> __declspec(property(get=__get__resCache, put=__set__resCache))  _resCache;

constexpr void __set__resCache(System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator> __get__resCache() const;

 int64_t __declspec(property(get=__get__nameSectionOffset, put=__set__nameSectionOffset))  _nameSectionOffset;

constexpr void __set__nameSectionOffset(int64_t value) ;

constexpr int64_t __get__nameSectionOffset() const;

 int64_t __declspec(property(get=__get__dataSectionOffset, put=__set__dataSectionOffset))  _dataSectionOffset;

constexpr void __set__dataSectionOffset(int64_t value) ;

constexpr int64_t __get__dataSectionOffset() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__nameHashes, put=__set__nameHashes))  _nameHashes;

constexpr void __set__nameHashes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__nameHashes() const;

 void* __declspec(property(get=__get__nameHashesPtr, put=__set__nameHashesPtr))  _nameHashesPtr;

constexpr void __set__nameHashesPtr(void* value) ;

constexpr void* __get__nameHashesPtr() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__namePositions, put=__set__namePositions))  _namePositions;

constexpr void __set__namePositions(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__namePositions() const;

 void* __declspec(property(get=__get__namePositionsPtr, put=__set__namePositionsPtr))  _namePositionsPtr;

constexpr void __set__namePositionsPtr(void* value) ;

constexpr void* __get__namePositionsPtr() const;

 ::ArrayW<System::RuntimeType> __declspec(property(get=__get__typeTable, put=__set__typeTable))  _typeTable;

constexpr void __set__typeTable(::ArrayW<System::RuntimeType> value) ;

constexpr ::ArrayW<System::RuntimeType> __get__typeTable() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__typeNamePositions, put=__set__typeNamePositions))  _typeNamePositions;

constexpr void __set__typeNamePositions(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__typeNamePositions() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryFormatter __declspec(property(get=__get__objFormatter, put=__set__objFormatter))  _objFormatter;

constexpr void __set__objFormatter(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryFormatter __get__objFormatter() const;

 int32_t __declspec(property(get=__get__numResources, put=__set__numResources))  _numResources;

constexpr void __set__numResources(int32_t value) ;

constexpr int32_t __get__numResources() const;

 System::IO::UnmanagedMemoryStream __declspec(property(get=__get__ums, put=__set__ums))  _ums;

constexpr void __set__ums(System::IO::UnmanagedMemoryStream value) ;

constexpr System::IO::UnmanagedMemoryStream __get__ums() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;


// Methods

static System::Resources::ResourceReader New_ctor(System::IO::Stream stream, System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator> resCache) ;

/// @brief Method .ctor addr 0x2374350 size 0xec virtual false final false
 void _ctor(System::IO::Stream stream, System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceLocator> resCache) ;

/// @brief Method Close addr 0x23745b0 size 0x3c virtual true final true
 void Close() ;

/// @brief Method Dispose addr 0x237462c size 0x3c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x23745ec size 0x40 virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method ReadUnalignedI4 addr 0x2374668 size 0x8 virtual false final false
static int32_t ReadUnalignedI4(void* p) ;

/// @brief Method SkipString addr 0x2374670 size 0xb8 virtual false final false
 void SkipString() ;

/// @brief Method GetNameHash addr 0x2374728 size 0x44 virtual false final false
 int32_t GetNameHash(int32_t index) ;

/// @brief Method GetNamePosition addr 0x237476c size 0x120 virtual false final false
 int32_t GetNamePosition(int32_t index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x237488c size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method GetEnumerator addr 0x2374890 size 0xd0 virtual true final true
 System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method GetEnumeratorInternal addr 0x2374994 size 0x70 virtual false final false
 System::Resources::System__Resources__ResourceReader__ResourceEnumerator GetEnumeratorInternal() ;

/// @brief Method FindPosForResource addr 0x2374a04 size 0x3d4 virtual false final false
 int32_t FindPosForResource(::StringW name) ;

/// @brief Method CompareStringEqualsName addr 0x2374dd8 size 0x20c virtual false final false
 bool CompareStringEqualsName(::StringW name) ;

/// @brief Method AllocateStringForNameIndex addr 0x2374fe4 size 0x8ec virtual false final false
 ::StringW AllocateStringForNameIndex(int32_t index, ByRef<int32_t> dataOffset) ;

/// @brief Method GetValueForNameIndex addr 0x23758d0 size 0x2a8 virtual false final false
 ::bs_hook::Il2CppWrapperType GetValueForNameIndex(int32_t index) ;

/// @brief Method LoadString addr 0x2375d78 size 0x2b0 virtual false final false
 ::StringW LoadString(int32_t pos) ;

/// @brief Method LoadObject addr 0x23763ec size 0x2c virtual false final false
 ::bs_hook::Il2CppWrapperType LoadObject(int32_t pos) ;

/// @brief Method LoadObject addr 0x2376418 size 0x98 virtual false final false
 ::bs_hook::Il2CppWrapperType LoadObject(int32_t pos, ByRef<System::Resources::ResourceTypeCode> typeCode) ;

/// @brief Method LoadObjectV1 addr 0x2375b78 size 0x100 virtual false final false
 ::bs_hook::Il2CppWrapperType LoadObjectV1(int32_t pos) ;

/// @brief Method _LoadObjectV1 addr 0x23764b0 size 0x838 virtual false final false
 ::bs_hook::Il2CppWrapperType _LoadObjectV1(int32_t pos) ;

/// @brief Method LoadObjectV2 addr 0x2375c78 size 0x100 virtual false final false
 ::bs_hook::Il2CppWrapperType LoadObjectV2(int32_t pos, ByRef<System::Resources::ResourceTypeCode> typeCode) ;

/// @brief Method _LoadObjectV2 addr 0x2376ec0 size 0x738 virtual false final false
 ::bs_hook::Il2CppWrapperType _LoadObjectV2(int32_t pos, ByRef<System::Resources::ResourceTypeCode> typeCode) ;

/// @brief Method DeserializeObject addr 0x2376ce8 size 0x1d8 virtual false final false
 ::bs_hook::Il2CppWrapperType DeserializeObject(int32_t typeIndex) ;

/// @brief Method ReadResources addr 0x237443c size 0x174 virtual false final false
 void ReadResources() ;

/// @brief Method _ReadResources addr 0x23775f8 size 0x6d8 virtual false final false
 void _ReadResources() ;

/// @brief Method FindType addr 0x2376028 size 0x3c4 virtual false final false
 System::RuntimeType FindType(int32_t typeIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
NEED_NO_BOX(System::Resources::ResourceReader);
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceReader, "System.Resources", "ResourceReader");
NEED_NO_BOX(System::Resources::System__Resources__ResourceReader__ResourceEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Resources::System__Resources__ResourceReader__ResourceEnumerator, "System.Resources", "ResourceReader/ResourceEnumerator");
